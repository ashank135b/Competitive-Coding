#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<bool> vb;

#define PI 3.141592653589793
#define MOD 1000000009
#define N 200000


int main()
{
    IOS;
    ll k;
    map< ll,pair<ll,ll> > mp;
    set<ll> s;
    cin>>k;
    ll a[N];
    for(ll i=1;i<=k;i++)
    {
    	ll n,sum=0;
    	cin>>n;
    	for(ll j=1;j<=n;j++)
    	{
    		cin>>a[j];
    		sum+=a[j];
    	}
    	for(ll j=1;j<=n;j++)
    	{
    		if(s.find(sum-a[j])!=s.end())
    		{
    			cout<<"YES"<<endl;
    			cout<<mp[sum-a[j]].ff<<" "<<mp[sum-a[j]].ss<<endl;
    			cout<<i<<" "<<j<<endl;
    			return 0;
    		}
    	}
    	for(ll j=1;j<=n;j++)
    	{
    		s.insert(sum-a[j]);
    		mp[sum-a[j]]=make_pair(i,j);
    	}
    }
    cout<<"NO"<<endl;
    return 0;
}
