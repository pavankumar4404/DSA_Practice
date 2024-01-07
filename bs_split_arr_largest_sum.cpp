#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subarrays(vector<int> &arr,int sum){
        int cnt=1;
        int subsum=0;
        for(int i=0;i<arr.size();i++){
            if(subsum+arr[i] <= sum){
                subsum+=arr[i];
            }
            else{
                cnt++;
                subsum=arr[i];
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=INT_MIN;int high=0;
        for(auto &i:nums){
            low=max(low,i);
            high+=i;
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(subarrays(nums,mid)<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};

int main() {
    Solution solution;

    // Example usage with a vector of integers and value of k
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;

    int result = solution.splitArray(nums, k);

    // Displaying the result
    cout << "Minimum largest sum of subarrays: " << result << endl;

    return 0;
}
