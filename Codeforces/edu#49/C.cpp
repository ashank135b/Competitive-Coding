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

int main()
{
    IOS;
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll a[n];
    	map<ll,ll> mp;
    	for(ll i=0;i<n;i++)
    	{
    		cin>>a[i];
    		mp[a[i]]++;
    	}
    	vll v;
    	ll flag=0;
    	for(auto it:mp)
    	{
    		if(it.ss>=4)
    		{
    			cout<<it.ff<<" "<<it.ff<<" "<<it.ff<<" "<<it.ff<<endl;
    			flag=1;
    			break;
    		}
    		else if(it.ss>=2)
    		{
    			v.pb(it.ff);
    		}
    	}
    	if(flag)
    		continue;
    	sort(v.begin(),v.end());
    	ll id1=0,id2=1;
    	float val=FLT_MAX;
    	for(ll i=1;i<v.size();i++)
    	{
    		float P,S;
    		P=(float)2*(v[i-1]+v[i]);
    		P*=P;
    		S=(float)(v[i-1]*v[i]);
    		float cur=(float)P/S;
    		if(val>cur)
    		{
    			val=cur;
 				id1=i-1;
 				id2=i;
    			//cout<<val<<endl;
    		}
    	}
    	cout<<v[id1]<<" "<<v[id1]<<" "<<v[id2]<<" "<<v[id2]<<endl;
    }
    return 0;
}
