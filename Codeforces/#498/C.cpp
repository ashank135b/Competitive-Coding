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
    for(ll i=0;i<n;i++)
    	cin>>a[i];
    if(n==1)
    {
    	cout<<0<<endl;
    	return 0;
    }
    ll sum1=a[0],sum3=a[n-1];
    ll i=1,j=n-2;
    ll ans=0;
    if(sum1==sum3)
    	ans=sum1;
    while(i<n&&i<=j)
    {
    	if(sum1==sum3)
    	{
    		ans=max(sum1,ans);
    		sum3+=a[j--];
    	}
    	else if(sum1<sum3)
    	{
    		sum1+=a[i++];
    	}
    	else
    	{
    		sum3+=a[j--];
    	}
    }
    if(sum1==sum3)
    	ans=max(sum1,ans);
    //cout<<sum1<<" "<<sum3<<endl;
    //cout<<i<<" "<<j<<endl;
    cout<<ans<<endl;

    return 0;
}
