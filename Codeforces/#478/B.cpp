#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1000000009

vll v;
ll a[14];

ll find(ll i)
{
	ll b[14];
	for(ll j=0;j<14;j++)
		b[j]=a[j];
	ll round=b[i]/14;
	ll rem=b[i]%14;
	b[i]=0;
	for(ll j=0;j<14;j++)
		b[j]+=round;
	
	ll s=i+1;
	while(rem--)
	{
		if(s==14)
			s=0;
		//if(s==i)
			//s++;
		b[s++]++;
	}
	ll sum=0;
	for(ll i=0;i<14;i++)
	{
		//cout<<b[i]<<" ";
		if(b[i]%2==0)
			sum+=b[i];
	}
	//cout<<endl;
	return sum;

}

int main()
{
    IOS;

    ll max=0,maxid=0;
    for(ll i=0;i<14;i++)
    {
    	cin>>a[i];
    	if(a[i]!=0)
    		v.pb(i);
    }

    ll ans=0;
    /*for(ll i=0;i<v.size();i++)
    	cout<<v[i]<<" ";
    cout<<endl;*/

    for(ll i=0;i<v.size();i++)
    {
    	ll val=find(v[i]);
    	if(val>ans)
    		ans=val;
    }
    cout<<ans<<endl;

    return 0;
}
