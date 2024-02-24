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
    unordered_map<ll,int> no;
    ll maxi=INT_MAX;
    ll mini=0;
    for(int i=0;i<n;i++){
        ll a,x;
        cin>>a>>x;
        if(a==3){
            no[x]++;
        }
        if(a==1){
            mini=max(mini,x);
        }
        if(a==2){
            maxi=min(maxi,x);
        }
    }
    // cout<<mini<<' '<<maxi<<endl;
    if(mini>maxi){
        cout<<0<<'\n';
        return;
    }
    ll ans=0;
    for(auto it:no){
        if(it.first>=mini && it.first<=maxi){
            ans++;
        }
    }
    cout<<maxi-mini+1-ans<<'\n';
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