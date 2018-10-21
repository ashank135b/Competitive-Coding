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
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ll cur=0;
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	if(cur+a[i]>=m)
    	{
    		cout<<abs(a[i]+cur)/m<<" ";
    		cur=(a[i]+cur)%m;
    	}
    	else
    	{
    		cout<<0<<" ";
    		cur+=a[i];
    	}
    }
    cout<<endl;
    return 0;
}
