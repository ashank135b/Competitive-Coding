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
    for(ll i=0;i<n;i++)
    	cin>>a[i];
    sort(a,a+n);
    ll ans=0;
    for(ll i=1;i<n;i++)
    {
    	if(a[i]!=a[i-1]+1)
    	{
    		ans+=a[i]-a[i-1]-1;
    	}
    }
    cout<<ans<<endl;
    return 0;
}
