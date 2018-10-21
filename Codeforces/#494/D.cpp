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
    ll n,q;
	cin>>n>>q;
	map<ll,ll> mp;
	for(ll i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		mp[a]++;
	}
	while(q--)
	{
		ll ans=0,b;
		cin>>b;
		for(ll i=pow(2,31);i>=1;i/=2)
		{
			ll p=min(b/i,mp[i]);
			ans+=p;
			b-=i*p;
		}
		if(b==0)
			cout<<ans<<endl;
		else
			cout<<-1<<endl;
	}
    return 0;
}
