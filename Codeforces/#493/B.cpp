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
    ll n,b;
    cin>>n>>b;
    ll a[n];
    for(ll i=0;i<n;i++)
    	cin>>a[i];
   	vector<ll> v;
   	ll cnt=0;
   	for(ll i=0;i<n-1;i++)
   	{
   		if(a[i]%2==1)
   			cnt++;
   		if(2*cnt==i+1)
   			v.pb(abs(a[i+1]-a[i]));
   	}
   	sort(v.begin(),v.end());
   	ll ans=0,sum=0;
   	for(ll i=0;i<v.size();i++)
   	{
   		sum+=v[i];
   		if(sum<=b)
   			ans++;
   		else
   			break;
   	}
   	cout<<ans<<endl;
    return 0;
}
