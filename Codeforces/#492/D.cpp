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
    ll a[2*n];
    for(ll i=0;i<2*n;i++)
    	cin>>a[i];
    ll ans=0;
    for(ll i=0;i<2*n;i+=2)
    {
    	if(a[i]!=a[i+1])
    	{
    		for(ll j=i+1;j<2*n;j++)
    		{
    			if(a[j]==a[i])
    			{
    				for(ll k=j-1;k>i;k--)
    				{
    					swap(a[k],a[k+1]);
    					/*for(ll l=0;l<2*n;l++)
    						cout<<a[l]<<" ";
    					cout<<endl;*/
    					ans++;
    				}
    				break;
    			}
    		}
    	}
    }
    cout<<ans<<endl;
    return 0;
}
