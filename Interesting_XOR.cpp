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
    ll c;
    cin>>c;
    int msb=0;
    ll n=c;
    n=n>>1;
    while(n!=0){
        n=n>>1;
        msb++;
    }
    ll a=1<<msb;
    ll b=0;
    int k=msb;

    for(int i=1;i<=k;i++){
        ll temp=1<<(msb-i);
        if((temp&c)==0){
            a=a|temp;
            b=b|temp;
        }
        else{
            b=b|temp;
        }
    }
    cout<<a*b<<endl;
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