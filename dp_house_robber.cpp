// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

#include <bits/stdc++.h>
using namespace std;

int solve(int ind, vector<int> &dp, vector<int> &nums){
    if(ind==0){
        dp[ind]=nums[ind];
        return nums[ind];
    }
    if(ind<0) return 0;

    if(dp[ind]!=-1) return dp[ind];

    int pick=nums[ind]+solve(ind-2,dp,nums);
    int notpick=solve(ind-1,dp,nums);
    return dp[ind]=max(pick,notpick);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    // vector<int> dp(nums.size(),-1);
    // return solve(nums.size()-1,dp,nums);

    // tabulation
    // dp[0]=nums[0];
    // for(int i=1;i<nums.size();i++){
    //     int pick=nums[i];
    //     if(i-2>=0) pick+=dp[i-2];
    //     int notpick=dp[i-1];
    //     dp[i]=max(pick,notpick);
    // }
    // return dp[nums.size()-1];

    // space optimization
    int prev=nums[0];
    int prev2=0;
    for(int i=1;i<nums.size();i++){
        int pick=nums[i];
        if(i-2>=0) pick+=prev2;
        int notpick=prev;
        int cur=max(pick,notpick);
        prev2=prev;
        prev=cur;
    }
    return prev;
}


int main(){
    int n=5;
    vector<int> arr;
    arr={2,7,9,3,1};
    cout<<maximumNonAdjacentSum(arr);    
    return 0;
}