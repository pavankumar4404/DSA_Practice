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
    string s;
    cin>>s;
    int n=s.length();
    int i=0;
    if(s[0]=='9') i++;
    for(;i<n;i++){
        if((s[i]-'0') >= 5){
            s[i]=((9-(s[i]-'0'))+'0');
        }
    }
    cout<<s<<endl;

    return 0;
}