#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1000000009

int main()
{
    IOS;
    ll n,q;
    cin>>n>>q;
    ll a[n+1];
    a[0]=0;
    for(ll i=1;i<=n;i++)
    {
    	cin>>a[i];
    	a[i]+=a[i-1];
    }
    /*for(ll i=0;i<=n;i++)
    	cout<<a[i]<<" ";
    cout<<endl;*/
    ll ans,hits=0;
    for(ll i=0;i<q;i++)
    {
    	ll k;
    	cin>>k;
    	hits+=k;
    	if(hits>=a[n])
    	{
    		ans=n;
    		hits=0;
    	}
    	else
    	{
    		ans=n+1-(upper_bound(a+1,a+n+1,hits)-a);
    	}
    	cout<<ans<<endl;
    }
    return 0;
}
