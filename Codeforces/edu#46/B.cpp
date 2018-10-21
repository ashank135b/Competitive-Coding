#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1000000009

int main()
{
    IOS;
    ll n,M;
    cin>>n>>M;
    ll a[n+2];
    a[0]=0;
    a[n+1]=M;
    for(ll i=1;i<=n;i++)
    	cin>>a[i];
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
    	ll t1=0,t2=0;
    	if(a[i]-a[i-1]>a[i+1]-a[i]-1)
    	{
    		t1=max(t1,a[i]-a[i-1]);
    	}
    	if(a[i]-a[i-1]-1<a[i+1]-a[i])
    	{
    		t2=max(t2,a[i+1]-a[i]);
    	}
    	if(t1>t2)
    	{
    		ans+=a[i]-a[i-1]+a[i+1]-a[i]-1;
    	}
    	else
    	{
    		ans+=a[i+1]-a[i]+a[i]-a[i-1]-1;
    	}
    }
    cout<<ans<<endl;
    return 0;
}
