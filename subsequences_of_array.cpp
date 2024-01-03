#include <bits/stdc++.h>
using namespace std;

// Bit manipulation method
vector<vector<int>> subsets(vector<int>& nums) {
    int n=nums.size();
    vector<vector<int>> arr;
    for(int i=0;i<(1<<n);i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                temp.push_back(nums[j]);
            }
        }
        arr.push_back(temp);
    }
    return arr;
}


// Recursive Method

// void f(int ind, vector<vector<int>>&arr, vector<int>& nums,vector<int> &temp,int n){
//     if(ind>=n){
//         arr.push_back(temp);
//         // temp.clear();
//         return ;
//     }
//     temp.push_back(nums[ind]);
//     f(ind+1,arr,nums,temp,n);
//     temp.pop_back();
//     f(ind+1,arr,nums,temp,n);
// }

// vector<vector<int>> subsets(vector<int>& nums) {
//     int n=nums.size();
//     vector<vector<int>> arr;
//     vector<int> temp;
//     f(0,arr,nums,temp,n);
//     return arr;
// }

int main(){
    vector<int> nums={3,1,2};
    vector<vector<int>> arr=subsets(nums);
    for(auto i:arr){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}