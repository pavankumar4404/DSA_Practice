#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n=1;
//     int cnt=0;
//     while(n>0){
//         if(n&1) cnt++;
//         n=n>>1;
//     }
//     cout<<cnt;
//     return 0;
// }

#include <bitset>

int main() {
    int num = 100;
    int set=__builtin_popcount(num);
    cout<<"set bits :"<<set<<endl;
    bitset<16> bin(num);
    cout<<bin<<endl;
    // Count the number of set bits
    int count = bin.count();
    
    string binary=bin.to_string();

    cout << "Number of set bits in " << num << ": " << count << endl;

    return 0;
}
