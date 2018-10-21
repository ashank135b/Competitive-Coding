#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 200005

int main()
{
    IOS;
    ll n,h;
    cin>>n>>h;
    vector<pair<ll,ll> > a;
    for(ll i=0;i<n;i++)
    {
    	ll x,y;
    	cin>>x>>y;
    	a.pb(make_pair(x,y));
    }
    vll pre(n);
    for(ll i=0;i<n;i++)
    {
    	if(i!=0)
    		pre[i]=a[i].ss-a[i].ff+pre[i-1];
    	else
    		pre[i]=a[i].ss-a[i].ff;
    }
    vll fall(n);
    fall[0]=0;
    for(ll i=1;i<n;i++)
    {
    	fall[i]=a[i].ff-a[i-1].ss+fall[i-1];
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
    	auto it=lower_bound(fall.begin(), fall.end(), h+fall[i]);
    	ll cur=0;
    	if(it!=fall.end())
    	{
    		ll pos=it-fall.begin();
    		if(i!=0)
    			cur=h+pre[pos-1]-pre[i-1];
    		else
    			cur=h+pre[pos-1];
    	}
    	else
    	{
    		if(i!=0)
    			cur=h+pre[n-1]-pre[i-1];
    		else
    			cur=h+pre[n-1];
    	}
    	ans=max(ans,cur);
    }
    cout<<ans<<endl;
    return 0;
}