#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=6;
    int b=5;
    a=a^b;
    cout<<a<<" "<<b<<endl;
    b=b^a;
    cout<<a<<" "<<b<<endl;
    a=a^b;
    cout<<a<<" "<<b<<endl;

    return 0;
}