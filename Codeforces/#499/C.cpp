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
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	if(a[i]==1)
    	{
    		cout<<-1<<endl;
    		return 0;
    	}
    }
    for(ll i=0;i<n;i++)
    {
    	cin>>b[i];
    	if(b[i]==1)
    	{
    		cout<<-1<<endl;
    		return 0;
    	}
    }
    double cur=m;
    cur+=cur/(a[0]-1);
    for(ll i=n-1;i>=1;i--)
    {
    	cur+=cur/(b[i]-1);
    	cur+=cur/(a[i]-1);
    }
    cur+=cur/(b[0]-1);
    cout<<fixed<<setprecision(12);
    cout<<cur-m<<endl;
    return 0;
}
