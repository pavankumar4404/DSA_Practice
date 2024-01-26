#include <bits/stdc++.h>
using namespace std;

void solve(string &s, vector<string> &ans, int open, int close, int i){
    if(close<open || close<0 || open<0){
        return;
    }
    if(open==0 && close==0){
        ans.push_back(s);
        return;
    }
    
    s[i]='(';
    solve(s, ans, open-1, close, i+1);
    s[i]=')';
    solve(s, ans, open, close-1,i+1);
}

int main(){
    int n;
    cin>>n;
    vector<string> ans;
    string s(2*n,' ');
    solve(s,ans,n,n,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}