#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
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

int main()
{
    IOS;
    ll n;
    cin>>n;
    ll x[n];
    set<ll> s;
    for(ll i=0;i<n;i++)
    {
    	cin>>x[i];
    	s.insert(x[i]);
    }
    ll sz=0;
    vll ans;
    for(ll k=1;k<=2e9;k*=2)
    {
    	for(ll i=0;i<n;i++)
    	{
    		ll count=1;
    		if(s.find(x[i]-k)!=s.end())
    		{
    			count++;
    		}
    		if(s.find(x[i]+k)!=s.end())
    		{
    			count++;
    		}
    		if(count>sz)
    		{
    			//cout<<x[i]<<" "<<count<<endl;
    			sz=count;
    			ans.clear();
    			ans.pb(x[i]);
    			if(s.find(x[i]-k)!=s.end())
    				ans.pb(x[i]-k);
    			if(s.find(x[i]+k)!=s.end())
    				ans.pb(x[i]+k);

    		}
    	}
    }
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++)
    	cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}