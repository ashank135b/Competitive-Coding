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

struct element
{
	ll ind,val;
};

bool cmp(element a,element b)
{
	return a.val<b.val;
}

int main()
{
    IOS;
    ll n,m;
    cin>>n>>m;
    element a[n];
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i].val;
    	a[i].ind=i;
    }
    ll count=n/m;
    sort(a,a+n,cmp);
    vll c(m);
    for(ll i=0;i<n;i++)
    {
    	c[a[i].val%m].pb(a[i].ind);
    }


    return 0;
}
