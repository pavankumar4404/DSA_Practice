#include <bits/stdc++.h>

using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int n=s.length();
        if(k>n) return -1;
        
        int ans=INT_MIN;
        int i=0;
        int j=0;
        unordered_map<char,int> mp;
        while(j<n){
            mp[s[j]]++;
            if(mp.size()<k){
                j++;
            }
            else if(mp.size()==k){
                ans=max(ans,j-i+1);
                j++;
            }
            else{
                while(mp.size()>k){
                    mp[s[i]]--;
                    if(mp[s[i]]==0) mp.erase(s[i]);
                    i++;
                }
                j++;
            }
            
        }
        if(ans<0) return -1;
        return ans;
    }
};

int main() {
    // Example usage
    Solution solution;

    string inputString = "aabacbebebe";
    int k = 3;

    int result = solution.longestKSubstr(inputString, k);

    cout << "Length of the longest substring with at most " << k << " distinct characters: " << result << endl;

    return 0;
}
