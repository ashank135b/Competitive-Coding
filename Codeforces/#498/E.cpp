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

vll g[N],l;
ll visited[N],sub[N];

void dfs(ll s)
{
	visited[s]=true;
	sub[s]=1;
	l.pb(s);
	for(ll i=0;i<g[s].size();i++)
	{
		ll u=g[s][i];
		if(!visited[u])
		{
			dfs(u);
			sub[s]+=sub[u];
		}
	}
}

int main()
{
    IOS;
    ll n,q;
    cin>>n>>q;
    memset(visited,false,sizeof(visited));
    for(ll i=1;i<n;i++)
    {
    	ll p;
    	cin>>p;
    	p--;
    	g[p].pb(i);
    }
    dfs(0);
    ll ans[n];
    for(ll i=0;i<n;i++)
    {
    	ans[l[i]]=i;
    }
    while(q--)
    {
    	ll u,k;
    	cin>>u>>k;
    	u--;
    	if(sub[u]<k)
    		cout<<-1<<endl;
    	else
    		cout<<l[ans[u]+k-1]+1<<endl;
    }


    return 0;
}
