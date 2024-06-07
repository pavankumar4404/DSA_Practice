#include <bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int> size;
    vector<int> parent;

public:
    DisjointSet(int n){
        size.resize(n+1, 0);
        parent.resize(n+1);

        for(int i=0; i<=n; i++){
            parent[i] = i;
        }
    }

    int findUPar(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node] = findUPar(parent[node]);
    }

    void unionBySize(int u, int v){
        int up_u = findUPar(u);
        int up_v = findUPar(v);
        if(up_u == up_v) return;

        if(size[up_u] < size[up_v]){
            parent[up_u] = up_v;
            size[up_v] += size[up_u];
        }
        else{
            parent[up_v] = up_u;
            size[up_u] += size[up_v];
        }
    }
};

// class DisjointSet{
//     vector<int> rank;
//     vector<int> parent;

// public:
//     DisjointSet(int n){
//         rank.resize(n+1, 0);
//         parent.resize(n+1);

//         for(int i=0; i<=n; i++){
//             parent[i] = i;
//         }
//     }

//     int findUPar(int node){
//         if(node == parent[node]){
//             return node;
//         }
//         return parent[node] = findUPar(parent[node]);
//     }

//     void unionByRank(int u, int v){
//         int up_u = findUPar(u);
//         int up_v = findUPar(v);
//         if(up_u == up_v) return;

//         if(rank[up_u] < rank[up_v]){
//             parent[up_u] = up_v;
//         }
//         else if(rank[up_u] > rank[up_v]){
//             parent[up_v] = up_u;
//         }
//         else{
//             parent[up_v] = up_u;
//             rank[up_u]++;
//         }
//     }
// };

int main() {
    DisjointSet ds(7);
    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);
    // if 3 and 7 same or not
    if (ds.findUPar(3) == ds.findUPar(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";

    ds.unionBySize(3, 7);

    if (ds.findUPar(3) == ds.findUPar(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";
    return 0;
}