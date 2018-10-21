#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1009

string s,t;
ll n,m,q;
ll cache[N][N];

ll dp(ll l,ll r)
{
	if(cache[l][r]!=-1)
		return cache[l][r];
	if(l>r)
		return 0;
	cache[l][r]=0;
	if(r-l+1==m)
	{
		ll flag=0;
		for(ll i=0;i<m;i++)
		{
			if(s[i+l]!=t[i])
			{
				flag=1;
				break;
			}
		}
		if(!flag)
			cache[l][r]++;
	}
	else
	{
		cache[l][r]=dp(l+1,r)+dp(l,r-1)-dp(l+1,r-1);
	}
	return cache[l][r];
}

int main()
{
	IOS;
	memset(cache,-1,sizeof(cache));
	cin>>n>>m>>q;
	cin>>s>>t;
	dp(0,n-1);
	while(q--)
	{
		ll l,r;
		cin>>l>>r;
		cout<<dp(l-1,r-1)<<endl;
	}
	return 0;
}