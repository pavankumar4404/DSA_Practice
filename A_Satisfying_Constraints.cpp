#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,ll>> arr;
    int a;
    ll x;
    rep(i,n){
        cin>>a>>x;
        arr.push_back({a,x});
    }
    sort(arr.begin(),arr.end());
    int i=1;
    while(arr[i].first != 2){
        i++;
    }
    ll max=arr[i].second;
    ll min=arr[i-1].second;
    if(min>max){
        cout<<0<<endl;
    }
    else{
        while(arr[i].first!=3){
            i++;
        }
        int in=0;
        for(;i<n;i++){
            if(arr[i].second<=max && arr[i].second>=min){
                in++;
            }
        }
        cout<<(max-min+1-in)<<endl;
    }
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