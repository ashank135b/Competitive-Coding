#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<bool> vb;

#define PI 3.141592653589793
#define MOD 1000000009

int main()
{
    IOS;
    ll n,a,b,ans=0,bb=0;
    cin>>n>>a>>b;
    vll t(n);
    for(ll i=0;i<n;i++)
        cin>>t[i];
    for(ll i=0;i<n;i++)
    {
        if(t[i]==1)
        {
            if(a>0)
            {
                a--;
            }
            else if(b>0)
            {
                b--;
                bb++;
            }
            else if(bb>0)
            {
                bb--;
            }
            else
            {
                ans++;
            }
        }
        else if(t[i]==2)
        {
            if(b>0)
                b--;
            else
            {
                ans+=2;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
