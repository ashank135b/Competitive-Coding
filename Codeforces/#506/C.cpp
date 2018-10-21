#include<bits/stdc++.h>
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
    ll n,ans=0;
	cin>>n;
    vector<pair<ll,ll>> a(n);
    multiset<ll> f,s;
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i].first>>a[i].second;
    	f.insert(a[i].first);
    	s.insert(a[i].second);
    }
    for(ll i=0;i<n;i++)
    {
    	f.erase(f.find(a[i].first));
    	s.erase(s.find(a[i].second));
    	ans=max(ans,*s.begin()-*(--f.end()));
    	f.insert(a[i].first);
    	s.insert(a[i].second);
    }
    cout<<ans<<endl;
    return 0;
}
