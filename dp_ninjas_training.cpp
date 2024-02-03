#include <bits/stdc++.h>
using namespace std;

int solve(int day, int last, vector<vector<int>>&arr, vector<vector<int>>&dp){
    if(day==0){
        int maxi=0;
        for(int i=0;i<=2;i++){
            if(i!=last){
                maxi=max(maxi,arr[0][i]);
            }
        }
        return maxi;
    }
    if(dp[day][last]!=-1) return dp[day][last];

    int maxi=0;
    for(int i=0;i<=2;i++){
        if(i!=last){
            int points=arr[day][i]+solve(day-1, i, arr, dp);
            maxi=max(maxi,points);
        }
    }
    return dp[day][last]=maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    // vector<vector<int>> dp(n,vector<int>(4,-1));
    // // return solve(n-1, 3, points, dp);

    // dp[0][0]=max(points[0][1],points[0][2]);
    // dp[0][1]=max(points[0][0],points[0][2]);
    // dp[0][2]=max(points[0][0],points[0][1]);
    // dp[0][3]=max(points[0][0],max(points[0][1],points[0][2]));

    // for(int day=1;day<n;day++){
    //     for(int last=0;last<=3;last++){
    //         for(int i=0;i<3;i++){
    //             if(i!=last){
    //                 int point=points[day][i]+dp[day-1][i];
    //                 dp[day][last]=max(dp[day][last],point);
    //             }
    //         }
    //     }
    // }
    // return dp[n-1][3];


    vector<int> prev(4,-1);
    // return solve(n-1, 3, points, dp);

    prev[0]=max(points[0][1],points[0][2]);
    prev[1]=max(points[0][0],points[0][2]);
    prev[2]=max(points[0][0],points[0][1]);
    prev[3]=max(points[0][0],max(points[0][1],points[0][2]));

    for(int day=1;day<n;day++){
        vector<int> temp(4,0);
        for(int last=0;last<=3;last++){
            
            for(int i=0;i<3;i++){
                if(i!=last){
                    int point=points[day][i]+prev[i];
                    temp[last]=max(temp[last],point);
                }
            }
        }
        prev=temp;
    }
    return prev[3];
}

int main() {
    int n; // Number of days
    cin >> n;

    vector<vector<int>> points(n, vector<int>(3, 0));

    // Input points for each day
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> points[i][j];
        }
    }

    int result = ninjaTraining(n, points);

    cout << "Maximum points: " << result << endl;

    return 0;
}
