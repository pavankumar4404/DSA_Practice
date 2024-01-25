#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int n, int from, int to, int aux) {
        if (n == 1) {
            cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
            return;
        }
        solve(n - 1, from, aux, to); // move all n-1 disks from rod src to helper
        cout << "move disk " << n << " from rod " << from << " to rod " << to << endl; // move biggest disk from src to dest
        solve(n - 1, aux, to, from); // move all n-1 disks form rod helper to dest
    }

    long long toh(int n, int from, int to, int aux) {
        // Your code here
        solve(n, from, to, aux);
        return pow(2, n) - 1;
    }
};

int main() {
    Solution solution;
    int n, from = 1, to = 3, aux = 2;
    cout << "Enter the number of disks: ";
    cin >> n;

    cout << "Tower of Hanoi moves:" << endl;
    long long totalMoves = solution.toh(n, from, to, aux);
    cout << "Total number of moves: " << totalMoves << endl;

    return 0;
}