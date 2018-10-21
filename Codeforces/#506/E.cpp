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

vll g[N];
bool visited[N];
ll dp[N][4];

ll dfs(ll s,ll p,ll d)
{
	if(dp[s][d]!=-1)
		return dp[s][d];
	else
	{
		ll ans=0;
		if(d<2)
		{
			for(ll i=0;i<g[s].size();i++)
			{
				ll u=g[s][i];
				if(u!=p)
					ans+=dfs(u,s,d+1);
			}
		}
		if(d==2)
		{
			ll ans1=1;
			for(ll i=0;i<g[s].size();i++)
			{
				ll u=g[s][i];
				if(u!=p)
				{
					ans1+=dfs(u,s,2);
					ans+=dfs(u,s,3);
				}
			}
			ans=min(ans,ans1);
		}
		if(d==3)
		{
			ll ans1=0;
			ll 
		}
	}
}

int main()
{
    IOS;
    memset(visited,false,sizeof(visited));
    memset(dp,-1,sizeof(dp));
    ll n;
    cin>>n;
    for(ll i=0;i<n-1;i++)
    {
    	ll a,b;
    	cin>>a>>b;
    	a--;b--;
    	g[a].pb(b);
    	g[b].pb(a);
    }
    cout<<dfs(0,0,0)<<endl;
    return 0;
}
