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
    int n,y;
    cin>>n>>y;
    int arr[n];
    int orr=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        orr=orr|arr[i];
    }
    
    int ans=orr^y;
    if((ans|orr)==y) cout<<ans<<endl;
    else cout<<-1<<endl;
}

int32_t main()
{
    fastio()
    int t;
    cin >> t;
    // cout<<3|5;
    while(t--)
    {
        solve();
    }
    return 0;
}
