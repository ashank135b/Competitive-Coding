#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define MOD 1000000009
int main()
{
    IOS;
    ll l,r,x,y;
    cin>>l>>r>>x>>y;
    if(y%x!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    ll n=y/x,ans=0;
    for(ll i=1;i*i<=n;i++)
    {
        ll a=i*x;
        ll b=(x*y)/a;
        if(n%i==0&&a>=l&&a<=r&&b<=r&&b>=l&&__gcd(a,b)==x)
        {
            ans+=2;
            if(a==b)
                ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}
