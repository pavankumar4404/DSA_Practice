#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int> mpp;
	    long long sum=0;
	    int ans=0;
	    mpp[0]=-1;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        int rem=sum%k;
	        if(rem<0) rem+=k;
	        if(mpp.find(rem)==mpp.end()){
	            mpp[rem]=i;
	        }
	        else{
	            ans=max(ans,i-mpp[rem]);
	        }
	    }
	    return ans;
	}
};

int main() {
    // Example array and parameters
    int arr[] = {-2, 2, -5, 12, -11, -1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = -3;

    // Create an instance of the Solution class
    Solution solution;

    // Call the method to find the length of the longest subarray
    int result = solution.longSubarrWthSumDivByK(arr, n, k);

    // Print the result
    cout << "Length of the longest subarray with sum divisible by " << k << ": " << result <<endl;

    return 0;
}