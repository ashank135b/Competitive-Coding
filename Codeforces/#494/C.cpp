#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 500005


int main()
{
    IOS;
    ll n,k;
    cin>>n>>k;
    ll a[n+1],pre[n+1]={0};
    for(ll i=1;i<=n;i++)
    {
    	cin>>a[i];
    	pre[i]=a[i]+pre[i-1];
    }
    double ans=0;
   	for(ll i=1;i<=n;i++)
   	{
   		for(ll j=i+k-1;j<=n;j++)
   		{
   			double avg=(double)(pre[j]-pre[i-1])/(j-i+1);
   			ans=max(ans,avg);
   		}
   	}
   	cout<<fixed<<setprecision(21)<<ans<<endl;
    return 0;
}
