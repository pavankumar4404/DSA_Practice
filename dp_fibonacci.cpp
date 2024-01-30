#include <bits/stdc++.h>
using namespace std;

// memoization/top-down dp
int fib(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
    {
        dp[n] = n;
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

// tabulation/bottom-up

int main()
{
    int n;
    cin >> n;
    // vector<int> dp(n + 1, -1);
    // cout<< fib(n,dp) <<'\n';

    // tabulation

    // dp[0] = 0;
    // dp[1] = 1;
    // for(int i=2;i<=n;i++){
    //     dp[i]=dp[i-1]+dp[i-2];
    // }
    // cout<<dp[n]<<'\n';

    // for(int i=0;i<dp.size();i++){
    //     cout<<dp[i]<<" ";
    // }

    // space optimization
    int prev2=0;
    int prev=1;
    for(int i=2;i<=n;i++){
        int cur=prev+prev2;
        prev2=prev;
        prev=cur;
    }
    cout<<prev;
}