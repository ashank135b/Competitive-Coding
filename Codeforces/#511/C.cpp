#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 200005

int main()
{
    IOS;
    ll n;
    cin>>n;
    ll a[n];
    ll c=0,prod=1;
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	prod*=a[i];
    	if(a[i]==1)
    	{
    		c++;
    	}
    }
    if(c==n)
    {
    	cout<<-1<<endl;
    	return 0;
    }
    if(c!=0)
    {
    	cout<<c<<endl;
    	return 0;
    }
    sort(a,a+n);
    ll g=__gcd(a[0],a[1]);
    for(ll i=1;i<n;i++)
    {
    	g=__gcd(g,a[i]);
    }
    ll ans1=0;
    //out<<g<<endl;
    ll cur=a[n-1];
    /*for(ll i=n-1;i>=0;i--)
    {
    	//cur=__gcd(cur,a[i]);
    	//cout<<i<<" ";
    	if(__gcd(cur,a[i])==g)
    	{
    		ans1++;
    		break;
    	}
    	else
    		cur=__gcd(cur,a[i]);
    }*/
    ll ans2=0;
    //cout<<cur<<endl;
    for(ll i=0;i<n;i++)
    {
    	if(g==__gcd(cur,a[i]))
    	{
    		//cur=__gcd(cur,a[i]);
    		ans2++;
    	}
    	else
    		cur=__gcd(cur,a[i]);
    }
    if(ans2==n)
    	cout<<-1<<endl;
    else
    	cout<<n-ans2<<endl;
    return 0;
}