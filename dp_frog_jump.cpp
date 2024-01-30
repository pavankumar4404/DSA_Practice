#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>&heights, vector<int>&dp){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1) return dp[n];
    int jump1=solve(n-1,heights,dp)+abs(heights[n]-heights[n-1]);
    int jump2=INT_MAX;
    if(n>1){
        jump2=solve(n-2,heights,dp)+abs(heights[n]-heights[n-2]);
    }
    return min(jump1,jump2);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    // vector<int> dp(n,-1);
    // return solve(n-1,heights,dp);

    // tabulation
    
    // dp[0]=0;
    // for(int i=1;i<n;i++){
    //     int jump1=dp[i-1]+abs(heights[i]-heights[i-1]);
    //     int jump2=INT_MAX;
    //     if(i>1){
    //         jump2=dp[i-2]+abs(heights[i]-heights[i-2]);
    //     }
    //     dp[i]=min(jump1,jump2);
    // }
    // for(int i=0;i<dp.size();i++){
    //     cout<<dp[i]<<" ";
    // }
    // cout<<endl;
    // return dp[n-1];

    // space optimized
    int prev2=0;
    int prev=0;
    for(int i=1;i<n;i++){
        int jump1=prev+abs(heights[i]-heights[i-1]);
        int jump2=INT_MAX;
        if(i>1){
            jump2=prev2+abs(heights[i]-heights[i-2]);
        }
        int cur=min(jump1,jump2);
        prev2=prev;
        prev=cur;
    }
    return prev;
}

int main(){
    int n=4;
    vector<int> arr;
    arr={10,20,30,10};
    cout<<frogJump(n,arr);
}