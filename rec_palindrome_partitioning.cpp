#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void solve(int ind, int n, vector<vector<string>> &ans, vector<string> &str, string &s){
        if(ind==n){
            ans.push_back(str);
            return;
        }
        for(int i=ind;i<n;i++){
            if(isPal(s,ind,i)){
                str.push_back(s.substr(ind,i-ind+1));
                solve(i+1,n,ans,str,s);
                str.pop_back();
            }
        }
    }
    bool isPal(string s, int start, int end){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> str;
        solve(0,s.length(),ans,str,s);
        return ans;
    }
};

int main() {
    string s = "aabb";
    Solution obj;
    vector < vector < string >> ans = obj.partition(s);
    int n = ans.size();
    cout << "The Palindromic partitions are :-" << endl;
    cout << " [ ";
    for (auto i: ans) {
        cout << "[ ";
        for (auto j: i) {
        cout << j << " ";
        }
        cout << "] ";
    }
    cout << "]";

    return 0;
}