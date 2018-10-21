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
    pair<ll,ll> p[n];
    ll c[n];
    for(ll i=0;i<n;i++)
    {
    	cin>>p[i].ff;
    	p[i].ss=i;
    }
    for(ll i=0;i<n;i++)
    	cin>>c[i];
    sort(p,p+n);
    ll ans[n];

    return 0;
}
