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
    ll s=0,e=n-1;
    ll a[n];
    for(ll i=0;i<n;i++)
    	cin>>a[i];
    ll ans=0;
    while(s<n)
    {
    	if(a[s]<=k)
    	{
    		ans++;
    		s++;
    	}
    	else
    		break;
    }
    while(e>=0&&e>s)
    {
    	if(a[e]<=k)
    	{
    		ans++;
    		e--;
    	}
    	else
    		break;
    }
    cout<<ans<<endl;
    return 0;
}
