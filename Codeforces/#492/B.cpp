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
    ll a[n];
    ll rounds[n];
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	a[i]-=i;
    	if(a[i]<0)
    		a[i]=0;
    	rounds[i]=(a[i])/n;
    	if(a[i]%n!=0)
    		rounds[i]++;
    }
    ll mn=LONG_MAX;
    for(ll i=0;i<n;i++)
    {
    	//cout<<rounds[i]<<" ";
    	mn=min(mn,rounds[i]);
    }
    //cout<<endl;
    for(ll i=0;i<n;i++)
    {
    	if(rounds[i]==mn)
    	{
    		cout<<i+1<<endl;
    		return 0;
    	}
    }
    
    return 0;
}
