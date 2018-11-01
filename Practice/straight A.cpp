#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<bool> vb;

#define PI 3.141592653589793
#define MOD 1000000009
template <class X>
X gcd(X a,X b)
{
	if(a%b==0)
		return b;
		else
			return gcd(b,a%b);
}


int main()
{
    IOS;
    ll n,k;
    cin>>n>>k;
    vll v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    double avg,sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+=(double)v[i];
    }
    ll ans=0;
    ll x=0;
    while(x<k)
    {
        avg=sum/(double)n;
        x=(ll)avg;
        if(avg-x>=0.5)
            x++;
        sum+=k;
        ans++;
        n++;
    }
    cout<<ans-1;
    return 0;
}
