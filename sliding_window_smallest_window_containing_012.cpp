#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        if(s.length()<3) return -1;
        
        int arr[]={0,0,0};
        int i=0;
        int j=0;
        int n=s.length();
        int ans=n+1;
        while(j<n){
            // int idx=(s[j]-'0');
            // cout<<idx<<" ";
            arr[s[j]-'0']++;
            if(arr[0]>0 && arr[1]>0 && arr[2]>0){
                ans=min(ans,j-i+1);
                if(ans==3) return 3;
                
                arr[s[i]-'0']--;
                
                i++;
                continue;
            }
            j++;
        }
        if(ans==n+1) return -1;
        return ans;
    }
};


int main() {
    Solution solution;

    // Test the function with different inputs
    cout << "Result: " << solution.smallestSubstring("1023456789012") << endl;
    cout << "Result: " << solution.smallestSubstring("000111222") << endl;
    cout << "Result: " << solution.smallestSubstring("012345") << endl;

    return 0;
}