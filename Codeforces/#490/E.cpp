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

vll g[5005];
ll ans=0;
ll visited[5005];
bool good[5005];

void dfs1(ll s)
{
    good[s]=true;
	//cout<<s+1<<endl;
	for(ll i=0;i<g[s].size();i++)
	{
		ll v=g[s][i];
		if(!good[v])
		{
			dfs1(v);
		}
	}
}
ll cnt=0;

ll dfs2(ll s)
{
    visited[s]=true;
    cnt++;
    for(ll i=0;i<g[s].size();i++)
    {
        ll v=g[s][i];
        if(!visited[v]&&!good[v])
        {
            dfs2(v);
        }
    }
}

int main()
{
    IOS;
    ll n,m,s;
    memset(good,false,sizeof(good));
    memset(visited,false,sizeof(visited));
    cin>>n>>m>>s;
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        g[a].pb(b);
    }
    s--;
    dfs1(s);
    vector<pair<ll,ll> > val;
    for(ll i=0;i<n;i++)
    {
        if(!good[i])
        {
            cnt=0;
            memset(visited,false,sizeof(visited));
            dfs2(i);
            val.pb(make_pair(cnt,i));
        }
    }
    sort(val.begin(),val.end());
    reverse(val.begin(),val.end());
    ll ans=0;

    for(ll i=0;i<val.size();i++)
    {
        //cout<<val[i].ff<<":"<<val[i].ss<<endl;
        if(!good[val[i].ss])
        {
            ans++;
            dfs1(val[i].ss);
        }
    }

    cout<<ans<<endl;
    return 0;
}
