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

void solve()
{
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll> a(n);
    vector<ll> b(m);
    rep(i,n) cin>>a[i];
    rep(j,m) cin>>b[j];

    sort(a.begin(),a.end(),greater<long long>());
    sort(b.begin(),b.end(),greater<long long>());
    long long int ans=0;
    for(int i=0;i<min(n,m);i++){
        ans+=min(a[i],h*b[i]);
    }
    cout<<ans<<endl;
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