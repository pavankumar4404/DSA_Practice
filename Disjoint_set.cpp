#include <bits/stdc++.h>
using namespace std;

class DS{
public:
    vector<int> size;
    vector<int> parent;
    DS(int n){
        size.resize(n+1, 1);
        parent.resize(n+1);

        for(int i=0; i<=n; i++){
            parent[i] = i;
        }
    }

    int findPar(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node] = findPar(parent[node]);
    }

    void Union(int u, int v){
        int up_u = findPar(u);
        int up_v = findPar(v);
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

//     int findPar(int node){
//         if(node == parent[node]){
//             return node;
//         }
//         return parent[node] = findPar(parent[node]);
//     }

//     void unionByRank(int u, int v){
//         int up_u = findPar(u);
//         int up_v = findPar(v);
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
    DS ds(7);
    ds.Union(1, 2);
    ds.Union(2, 3);
    ds.Union(4, 5);
    ds.Union(6, 7);
    ds.Union(5, 6);
    // if 3 and 7 same or not
    if (ds.findPar(3) == ds.findPar(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";

    ds.Union(3, 7);

    if (ds.findPar(3) == ds.findPar(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";
    return 0;
}