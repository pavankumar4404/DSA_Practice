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

int solve(){
    int a,b,n;
    cin>>a>>b>>n;
    if(a==b) return 0;
    int xorr=a^b;
    if(xorr < n){
        return 1;
    }
    // if(xorr>n) return -1;
    int cntx=0;
    int cntn=0;
    while(xorr>0){
        xorr=xorr>>1;
        cntx++;
    }
    n=n-1;
    while(n>0){
        n=n>>1;
        cntn++;
    }
    if(cntn < cntx) return -1;
    else return 2;
    return -1;
}

int32_t main()
{
    fastio()
    int t;
    cin >> t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}