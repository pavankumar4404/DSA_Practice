#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void solve()
{
    ll n;
    cin>>n;
    vector<int> arr(n+1,0);
    int temp;
    for(ll i=0;i<2*n;i++){
        cin>>temp;
        arr[temp]++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            no;
            return ;
        }
        if(arr[i]==0){
            yes;
            return ;
        }
    }
    yes;
}

int32_t main()
{
    fastio()
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
