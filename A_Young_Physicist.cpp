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
//     int i,j,k;
//     cin>>i>>j>>k;
//     int a,b,c;
// }

int32_t main()
{
    fastio()
    int t;
    cin >> t;
    int a=0,b=0,c=0;
    while(t--)
    {
        int i,j,k;
        cin>>i>>j>>k;
        a+=i;
        b+=j;
        c+=k;
    }
    if(a==0 && b==0 && c==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}