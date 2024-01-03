#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int temp=n;
    // string bin="";
    // while(temp>0){
    //     int bit=temp&1;
    //     bin+=to_string(bit);
    //     temp=(temp>>1);
    // }
    // reverse(bin.begin(),bin.end());
    // cout<<bin;

    bitset<16> bin(n);
    string binary=bin.to_string();

    return 0;
}