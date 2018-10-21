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

int main()
{
    IOS;
    ll n;
    cin>>n;
    ll sum=0;
    ll ans=0,t;
    for(ll i=0;i<4;i++)
    {
    	cin>>t;
    	sum+=t;
    }
    //cout<<sum<<endl;
    for(ll i=1;i<n;i++)
    {
    	ll cur=0;
    	for(ll j=0;j<4;j++)
    	{
    		cin>>t;
    		cur+=t;
    	}
    	//cout<<cur<<endl;
    	if(cur>sum)
    	{
    		ans++;
    	}
    }
	cout<<ans+1<<endl;
    return 0;
}
