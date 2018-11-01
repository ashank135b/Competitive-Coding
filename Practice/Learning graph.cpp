#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

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
    int n,m,k;
	cin>>n>>m>>k;
	ll w[n+1];
	vector< pair<ll,ll> > v[n+1];
	for(int i=1;i<=n;i++)
		cin>>w[i];
	int x,y;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		v[x].push_back(make_pair(w[y],y));
		v[y].push_back(make_pair(w[x],x));
	}
	for(int i=1;i<=n;i++)
	sort(v[i].begin(), v[i].end());

	for(int i=1;i<=n;i++)
	{
		if(v[i].size()>=k)
			cout<<v[i][v[i].size()-k].second<<endl;
		else
			cout<<"-1"<<endl;
	}
	return 0;
}
