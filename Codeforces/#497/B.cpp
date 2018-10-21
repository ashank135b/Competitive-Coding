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
    ll n;
    cin>>n;
    ll w[n],h[n];
    for(ll i=0;i<n;i++)
    	cin>>w[i]>>h[i];
    ll hmax=LONG_MAX;
    for(ll i=0;i<n;i++)
    {
    	if(w[i]>h[i])
    		swap(w[i],h[i]);
    	if(hmax<h[i]&&hmax<w[i])
    	{
    		cout<<"NO"<<endl;
    		return 0;
    	}
    	if(h[i]<=hmax)
    		hmax=h[i];
    	else
    		hmax=w[i];

    }
    cout<<"YES"<<endl;
    return 0;
}
