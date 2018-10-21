#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 100005

ll sign[N];
pair<pair<ll,ll>,ll> point[N];

ll dist(ll x,ll y)
{
	return x*x+y*y;
}

int main()
{
    IOS;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
    	cin>>point[i].ff.ff>>point[i].ff.ss;
    	point[i].ss=i;
    }
    ll sign[n];
    while(true)
    {
    	random_shuffle(point,point+n);
    	ll x=0,y=0;
    	for(ll i=0;i<n;i++)
    	{
    		ll ux=x-point[i].ff.ff;
    		ll uy=y-point[i].ff.ss;
    		ll vx=x+point[i].ff.ff;
    		ll vy=y+point[i].ff.ss;
    		if(dist(ux,uy)<dist(vx,vy))
    		{
    			x=ux;
    			y=uy;
    			sign[point[i].ss]=-1;
    		}
    		else
    		{
    			x=vx;
    			y=vy;
    			sign[point[i].ss]=1;
    		}
    	}
    	if(dist(x,y)<=2250000000000ll)
    	{
    		for(ll i=0;i<n;i++)
    			cout<<sign[i]<<" ";
    		cout<<endl;
    		return 0;
    	}

    	//cout<<x<<" "<<y<<endl;
    }
    return 0;
}
