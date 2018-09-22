#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1000000009

ll a,n,m;
bool rain[2005];
ll curumb[2005];
pair<ll,ll> umb[2005],seg[2005];
ll cache[2005][2005];


ll solve(ll x,ll y)
{
    if(x==a)
        return 0;
    if(cache[x][y]!=-1)     
        return cache[x][y];
    cache[x][y]=LONG_MAX;
    if(curumb[x]!=0)                                                                               //If there is an umbrella take it
        cache[x][y]=solve(x,x);
    if(rain[x]&&y==a+1)
        return cache[x][y];                                                                     //If there is rain and you have no umb. return INF
    if(rain[x])
        cache[x][y]=min(cache[x][y],curumb[y]+min(solve(x+1,y),solve(x+1,a+1)));                //If there is rain two choices are there keep it or drop it at the next point
    else
        cache[x][y]=min(min(cache[x][y],solve(x+1,a+1)),curumb[y]+min(solve(x+1,y),solve(x+1,a+1)));//If no rain drop it now,keep it or drop it at next point
    return cache[x][y];
}

int main()
{
    IOS;
    memset(rain,false,sizeof(rain));
    memset(curumb,0,sizeof(curumb));
    memset(cache,-1,sizeof(cache));
    cin>>a>>n>>m;
    for(ll i=0;i<n;i++)
    {
        cin>>seg[i].first>>seg[i].second;
        for(ll j=seg[i].first;j<seg[i].second;j++)
            rain[j]=true;
    }
    for(ll i=0;i<m;i++)
    {
        cin>>umb[i].first>>umb[i].second;
        if(curumb[umb[i].first]==0)
            curumb[umb[i].first]=umb[i].second;
        else
            curumb[umb[i].first]=min(curumb[umb[i].first],umb[i].second);
    }
    sort(seg,seg+n);
    sort(umb,umb+m);
    if(umb[0].first>seg[0].first)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    ll ans=solve(0,a+1);

    cout<<ans<<endl;

    return 0;
}
