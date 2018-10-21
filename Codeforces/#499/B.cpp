#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 109

int main()
{
    IOS;
    ll n,m;
    cin>>n>>m;
    map<ll,ll> mp;
    if(n>m)
    {
    	cout<<0<<endl;
    	return 0;
    }
    if(n==m)
    {
    	cout<<1<<endl;
    	return 0;
    }
    vll a(N,LONG_MAX);
    ll type=0;
    for(ll i=0;i<m;i++)
    {
    	ll x;
    	cin>>x;
    	if(a[x]==LONG_MAX)
    	{
    		type++;
    		a[x]=1;
    	}
    	else
    		a[x]++;
    }
    sort(a.begin(),a.end());
    a.resize(type);
    reverse(a.begin(),a.end());
    ll ans=0;
    for(ll i=100;i>=1;i--)
    {
    	ll cnt=0;
    	for(ll j=0;j<a.size();j++)
    	{
    		cnt+=a[j]/i;
    	}
    	if(cnt>=n)
    	{
    		cout<<i<<endl;
    		return 0;
    	}
    }
    return 0;
}
