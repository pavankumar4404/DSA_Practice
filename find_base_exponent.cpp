#include <bits/stdc++.h>
using namespace std;


pair<int,int> findBaseAndExponent(int num) {
    pair<int,int> p;
    int base=2;
    while(num%base!=0){
        base++;
    }
    int pow=log(num)/log(base);
    
    p.first=base;
    p.second=pow;
    return p;

}

int main() {
    int number = 65536;
    cout<<findBaseAndExponent(number).first<<endl;
    cout<<findBaseAndExponent(number).second;

    return 0;
}
