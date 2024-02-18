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

void solve(){
    int n;
    cin>>n;
    vector<int> arr(2*n,0);
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll ans=0;
    for(int i=0;i<2*n;i+=2){
        ans+=arr[i];
    }
    cout<<ans<<'\n';
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