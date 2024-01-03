#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int maxSumWithK(long long int arr[], long long int n, long long int k) {
        // sliding window
        long long int sum = 0;
        long long int cnt = 0;
        long long int i = 0;
        long long int j = 0;
        long long int ans = INT_MIN;
        long long int last = 0;
        while (j < n) {
            sum += arr[j];
            if (j - i + 1 < k) {
                j++;
            } else if (j - i + 1 == k) {
                ans = max(ans, sum);
                j++;
            } else if (j - i + 1 > k) {
                ans = max(ans, sum);
                last += arr[i];
                i++;
                if (last < 0) {
                    sum -= last;
                    ans = max(ans, sum);
                    last = 0;
                }
                j++;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;

    // Test the function with different inputs
    long long int arr[] = {1, 2, 3, -10, 5};
    long long int n = sizeof(arr) / sizeof(arr[0]);
    long long int k = 3;

    long long int result = solution.maxSumWithK(arr, n, k);

    cout << "Maximum sum of subarray with at most " << k << " elements: " << result << endl;

    return 0;
}
