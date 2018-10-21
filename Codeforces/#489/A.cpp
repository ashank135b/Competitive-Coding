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

pair<ll,ll> a[4],b[4];


int main()
{
    IOS;
	ll n;
	cin>>n;
	vll neg,pos;
	for(ll i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		if(a>0)
			pos.pb(a);
		if(a<0)
			neg.pb(-1*a);
	}
	ll ans=0,sub=0;
	sort(pos.begin(),pos.end());
	for(ll i=0;i<pos.size();i++)
	{
		if(sub==pos[i])
		{
			pos[i]=0;
		}
		else
		{
			sub=pos[i];
			pos[i]=0;
			ans++;
		}
	}
	ll add=0;
	sub=0;
	sort(neg.begin(),neg.end());
	//reverse(neg.begin(),neg.end());
	for(ll i=0;i<neg.size();i++)
	{
		if(sub==neg[i])
		{
			neg[i]=0;
		}
		else
		{
			sub=neg[i];
			neg[i]=0;
			ans++;
		}
	}
	/*{
		if(add==neg[i])
			neg[i]=0;
		else
		{
			add=abs(neg[i]);
			neg[i]=0;
			ans++;
		}
	}*/

	cout<<ans<<endl;
    return 0;
}
