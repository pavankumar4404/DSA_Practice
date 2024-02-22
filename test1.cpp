#include <bits/stdc++.h>
using namespace std;

int solve(int ind, vector<int> &ratings){
    if(ind==0) return ratings[ind];
    // if(dp[ind]!=-1) return dp[ind];
    
    int pick=INT_MIN;
    if(ratings[ind]>0){
        pick=ratings[ind]+solve(ind-1, ratings);
    }
    else{
        pick=ratings[ind] + solve(ind-2, ratings);
    }
    int notpick = solve(ind-1, ratings);
    
    return max(pick,notpick);
}

int maximizeRatings(vector<int> &ratings){
    solve(ratings.size()-1,ratings);
}

int main(){
    vector<int> ratings={-3,2,4,-1,-2,-5};
    cout<<maximizeRatings(ratings);
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <unordered_map>

// // Define a type alias for memoization
// using Memo = std::unordered_map<int, int>;

// int maxSum(const std::vector<int>& arr, int index, Memo& memo) {
//     if (index < 0) return 0; // Base case: no elements left
//     if (memo.find(index) != memo.end()) return memo[index]; // Check if result is memoized

//     // Calculate the maximum sum considering two cases: including the current element or not
//     int include = arr[index] + maxSum(arr, index - 2, memo); // Include current element
//     int exclude = maxSum(arr, index - 1, memo); // Exclude current element

//     // Memoize the result
//     memo[index] = std::max(include, exclude);

//     return memo[index];
// }

// int maxSum(const std::vector<int>& arr) {
//     Memo memo;
//     return maxSum(arr, arr.size() - 1, memo);
// }

// int main() {
//     std::vector<int> arr = {9,-1,-3,4,5};
//     std::cout << "Maximum sum: " << maxSum(arr) << std::endl; // Output: 10
//     return 0;
// }