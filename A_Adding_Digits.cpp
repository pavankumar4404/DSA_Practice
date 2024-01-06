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
    int a,b,n;
    cin>>a>>b>>n;
    string ans="";
    int num=a;
    
    for(int j=0;j<10;j++){
        if((num*10+j)%b == 0){
            num=num*10+j;
            break;
        }
        else if(j==9){
            cout<<-1<<endl;
            return 0;
        }
    }
    ans+=to_string(num);
    string result((n-1),'0');
    ans+=result;
    
    cout<<ans<<endl;
    return 0;
}