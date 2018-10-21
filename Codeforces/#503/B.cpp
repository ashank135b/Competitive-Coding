#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1005

vll g[N];
ll visited[N];
ll flag=0;

void dfs(ll s)
{
	visited[s]++;
	for(ll i=0;i<g[s].size();i++)
	{
		ll u=g[s][i];
		if(visited[u]==2)
		{
			cout<<u+1<<" ";
			flag=1;
			return;
		}
		else
		{
			dfs(u);
		}
		if(flag)
			return;
	}
}


int main()
{
    IOS;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
    	ll p;
    	cin>>p;
    	p--;
    	g[i].pb(p);
    }
    for(ll i=0;i<n;i++)
    {
    	flag=0;
    	memset(visited,0,sizeof(visited));
    	dfs(i);
    	if(!flag)
    		cout<<i+1<<" ";
    }
    cout<<endl;
    return 0;
}
