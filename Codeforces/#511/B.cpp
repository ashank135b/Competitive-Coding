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
    pair<ll,ll> p[n];
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
    	cin>>p[i].ff>>p[i].ss;
    	ans=max(ans,p[i].ff+p[i].ss);
    }
    cout<<ans<<endl;
    return 0;
}
