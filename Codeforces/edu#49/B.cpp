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
    ll n,q;
    cin>>n>>q;
    while(q--)
    {
    	ll x,y;
    	cin>>x>>y;
    	ll ans=0;
    	ans=((x-1)*(n)+y-1)/2+1;
    	if((x+y)%2)
    		ans+=(n*n+1)/2;
    	cout<<ans<<endl;
    }
    return 0;
}
