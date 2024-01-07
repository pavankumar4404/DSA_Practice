#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// Approach 1: extra ds and freq
    // void solve(vector<int> &nums, int n, vector<int> &ds, vector<vector<int>>&ans, int freq[]){
    //     if(ds.size()==n){
    //         ans.push_back(ds);
    //         return;
    //     }

    //     for(int i=0;i<n;i++){
    //         if(!freq[i]){
    //             ds.push_back(nums[i]);
    //             freq[i]=1;
    //             solve(nums,n,ds,ans,freq);
    //             ds.pop_back();
    //             freq[i]=0;
    //         }
    //     }
    // }

    // vector<vector<int>> permute(vector<int>& nums) {
    //     int n=nums.size();
    //     vector<vector<int>> ans;
    //     vector<int> ds;
    //     int freq[n];
    //     for(int i=0;i<n;i++) freq[i]=0;
    //     solve(nums,n,ds,ans,freq);
    //     return ans;
    // }

// Approach 2: Swapping
    void solve(int idx, vector<int> &nums, int n, vector<vector<int>> &ans){
        if(idx==n){
            ans.push_back(nums);
            return ;
        }
        for(int i=idx; i<n; i++){
            swap(nums[idx],nums[i]);
            solve(idx+1,nums,n,ans);
            swap(nums[idx],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        solve(0,nums,n,ans);
        return ans;
    }
};

int main() {
    Solution solution;

    // Example usage with a vector of integers
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = solution.permute(nums);

    // Displaying the result
    cout << "Permutations:" << endl;
    for (const vector<int>& permutation : result) {
        cout << "[ ";
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
