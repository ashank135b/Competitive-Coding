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
    ll n,m,d;
    cin>>n>>m>>d;
    ll a[n];
    set<pair<ll,ll> >s;
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	s.insert(make_pair(a[i],i));
    }
   	ll day=1;
   	ll ans[n];
   	while(!s.empty())
   	{
   		pair<ll,ll> cur=*s.begin();
   		ans[cur.ss]=day;
   		s.erase(s.begin());
   		while(true)
   		{
   			auto it=s.lower_bound(make_pair(cur.ff+d+1,0));
   			if(it==s.end())
   				break;
   			cur=*it;
   			s.erase(it);
   			ans[cur.ss]=day;
   		}
   		day++;
   	}
   	cout<<day-1<<endl;
   	for(ll i=0;i<n;i++)
   	{
   		cout<<ans[i]<<" ";
   	}
   	cout<<endl;
    return 0;
}
