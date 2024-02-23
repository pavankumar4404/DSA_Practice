#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define inp(x) int x; cin>>x;
#define br cout<<'\n'

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool f=0;
    int empty=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.')
        {
            empty++;
        }
        if(f!=1 && (i>0 && i<n-1)){
            if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.'){
                f=1;
            }
        }
    }
    if(f==1){
        cout<<2;br;
    }
    else{
        cout<<empty;br;
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