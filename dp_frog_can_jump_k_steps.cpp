#include <bits/stdc++.h>
using namespace std;

int solve(int n,int k, vector<int>&heights, vector<int>&dp){
    if(n<=0){
        return 0;
    }
    if(dp[n]!=-1) return dp[n];
    int minjump=INT_MAX;
    int jump;
    for(int i=1;i<=k;i++){
        if(n-i>=0)
            jump=solve(n-i,k,heights,dp)+abs(heights[n]-heights[n-i]);
        minjump=min(minjump,jump);
    }
    return dp[n]=minjump;
}

int minimizeCost(int n, int k, vector<int> &height){
    // Write your code here.
    vector<int>dp(n,-1);
    // return solve(n-1,k,height,dp);
    
    // tabulation
    
    dp[0]=0;
    for(int i=1;i<n;i++){
        int minjump=INT_MAX;
        int jump=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0)
            jump=dp[i-j]+abs(height[i]-height[i-j]);
            minjump=min(minjump,jump);
        }
        dp[i]=minjump;
    }
    return dp[n-1];
}

int main(){
    int n=4;
    int k=2;
    vector<int> arr;
    arr={10,20,30,10};
    cout<<minimizeCost(n,k,arr);
}