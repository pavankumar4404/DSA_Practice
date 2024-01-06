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

// void solve()
// {
    
// }

int32_t main()
{
    fastio()
    int t;
    cin >> t;
    int ans=0;
    while(t--)
    {
        string a;
        cin>>a;
        int n=a.length();
        if(a[0]=='+' || a[n-1]=='+') ans++;
        if(a[0]=='-' || a[n-1]=='-') ans--;
    }
    cout<<ans<<endl;
    return 0;
}