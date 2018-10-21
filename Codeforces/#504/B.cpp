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
    ll n,k;
    cin>>n>>k;
    if(k>2*n-1)
    {
    	cout<<0<<endl;
    	return 0;
    }
    if(k==1||k==2)
    {
    	cout<<0<<endl;
    	return 0;
    }
    if(k<=n)
    {
	    ll a=1,b=k-1;
	    ll ans=1;
	    ans+=(b-a)/2;
	    if(k%2==0)
	    	ans--;
	    cout<<ans<<endl;
	}
	else
	{
		ll b=n;
		ll a=k-b;
		ll ans=1;
		if(k%2==0&&k/2>=a&&k/2<=b)
			ans--;
		ans+=(b-a)/2;
		cout<<ans<<endl;
	}
    return 0;
}
