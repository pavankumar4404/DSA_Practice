#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr,int num){
    if(arr.size()==0 || arr[arr.size()-1]<num){
        arr.push_back(num);
        return;
    }
    int temp=arr[arr.size()-1];
    arr.pop_back();
    insert(arr,num);
    arr.push_back(temp);
}

void rec_sort(vector<int> &arr){
    if(arr.size()==1){
        return;
    }

    int last=arr[arr.size()-1];
    arr.pop_back();
    rec_sort(arr);
    insert(arr,last);
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,6,5,4,3,1,2};
    rec_sort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}