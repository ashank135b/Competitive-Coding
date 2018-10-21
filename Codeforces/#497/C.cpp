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
    ll n;
    cin>>n;
    ll a[n];
    vll b;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	if(mp[a[i]]==0)
    		b.pb(a[i]);
    	mp[a[i]]++;
    }
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    ll ans=0;
    for(ll i=1;i<b.size();i++)
    {
    	if(mp[b[i]]>=mp[b[i-1]])
    	{
    		ans+=mp[b[i-1]];
    	}
    	else
    	{
    		ans+=mp[b[i]];
    		mp[b[i]]+=mp[b[i-1]]-mp[b[i]];
    	}
    }
    cout<<ans<<endl;
    return 0;
}