#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

void solve(string &s1, string &s2){
    int n1=s1.length();
    int n2=s2.length();
    unordered_map<char,vector<int>> mp;
    vector<string> ans;
    for(int i=0;i<n2;i++){
        mp[s2[i]].push_back(i);
    }
    
    // string s="";
    // int len=0;

    int i=0;
    while(i<n1){
        auto found=mp.find(s1[i]);
        if(found==mp.end()){
            cout<<"Impossible";
            return;
        }
        
        int freq=found->second.size();
        int tempi=i;
        int lenmax=0;
        ans.push_back("");
        for(int j=0;j<freq;j++){
            int idx=found->second[j];
            string sr="",sl="";
            sr+=s1[i];
            sl+=s1[i];
            int len=1;
            if(idx<n2-1 && s2[idx+1]==s1[tempi+1]){
                int cnt=2;
                tempi++;
                sr+=s1[tempi];
                tempi++;
                len=2;
                while(tempi<n1 && (idx+cnt)<n2 && s1[tempi]==s2[idx+cnt]){
                    sr+=s1[tempi];
                    cnt++;
                    tempi++;
                    len++;
                }
                tempi=i;
                
                if(len>lenmax){
                    lenmax=len;
                    ans.pop_back();
                    ans.push_back(sr);
                }
            }
            
            len=1;
            if(idx>0 && s2[idx-1]==s1[tempi+1]){
                len=2;
                tempi++;
                sl+=s1[tempi];
                tempi++;
                int cnt=-2;
                while(tempi<n1 && (idx+cnt)>=0 && s1[tempi]==s2[idx+cnt]){
                    sl+=s1[tempi];
                    cnt--;
                    tempi++;
                    len++;
                }
                if(len>lenmax){
                    lenmax=len;
                    ans.pop_back();
                    ans.push_back(sr);
                }
            }
            if(len>lenmax){
                lenmax=len;
                ans.pop_back();
                ans.push_back(sr);
            }
        }
        i=i+lenmax;
    }

    for(size_t i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<"|";
    }
    cout<<ans[ans.size()-1];
}

int main()
{
    fastio()
    string s1,s2;
    cin>>s1;
    cin>>s2;
    solve(s1,s2);
    
}