// You are given two positive integers x and y.
// In one operation, you can do one of the four following operations:

// 1 Divide x by 11 if x is a multiple of 11.
// 2 Divide x by 5 if x is a multiple of 5.
// 3 Decrement x by 1.
// 4 Increment x by 1.
// 5 Return the minimum number of operations required to make x and y equal.

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int solve(int x, int y){
        if(y>=x){
            return y-x;
        }

        int res = abs(x - y);                                 
        res = min(res, 1 + x%5 + solve(x/5, y));              //case 1
        res = min(res, 1 + (5 - x%5) + solve(x/5 + 1, y));    //case 2
        res = min(res, 1 + x%11 + solve(x/11, y));            //case 3
        res = min(res, 1 + (11 - x%11) + solve(x/11 + 1, y)); //case 4
        
        return res;        
    }
    
    int minimumOperationsToMakeEqual(int x, int y) {
        if(y>x){
            return y-x;
        }
        int op = solve(x,y);
        
        return op;
    }
};

int main() {
    Solution solution;

    // Example usage with two integers x and y
    int x = 26;
    int y = 1;

    int result = solution.minimumOperationsToMakeEqual(x, y);

    // Displaying the result
    cout << "Minimum operations to make equal: " << result << endl;

    return 0;
}