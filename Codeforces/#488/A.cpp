#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1000000009

int main()
{
    IOS;
    ll n,m;
    cin>>n>>m;
    ll x[n];
    ll y[m];
    bool seq[10]={false};
    for(ll i=0;i<n;i++)
    {
		cin>>x[i];
		//seq[x[i]]=false;
	}
    for(ll i=0;i<m;i++)
    {
    	cin>>y[i];
    	seq[y[i]]=true;
    }
    for(ll i=0;i<n;i++)
    {
    	if(seq[x[i]])
    		cout<<x[i]<<" ";
    }
    cout<<endl;


    return 0;
}