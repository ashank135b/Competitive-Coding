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
    ll n,k,l;
    cin>>n>>k>>l;
    ll m=n*k;
    ll a[m];
    for(ll i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);

    if(a[n-1]-a[0]>l)
    {
        cout<<"0"<<endl;
        return 0;
    }

    ll s=1,e=m-1;
    for(ll i=1;i<m;i++)
    {
        if(abs(a[i]-a[0])>l)
        {
            e=i-1;
            break;
        }
    }
    if(e+1<n)
    {
        cout<<0<<endl;
        return 0;
    }
    ll ans=a[0];
    //cout<<ans<<endl;
    n--;
    for(ll i=e;i>=1;i--)
    {
        if(i<=n*k&&n>=1)
        {
            ans+=a[i];
            n--;
        }
    }
    cout<<ans<<endl;
    return 0;
}
