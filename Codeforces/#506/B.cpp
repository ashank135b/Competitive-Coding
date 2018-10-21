#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 100005

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
    	cout<<1<<endl;
    	return 0;
    }
    ll pre[n-1];
    memset(pre,0,sizeof(pre));
    for(ll i=n-2;i>=0;i--)
    {
    	if(2*a[i]>=a[i+1])
    	{
    		pre[i]++;
    	}
    }

    for(ll i=1;i<n-1;i++)
    {
    	if(pre[i]!=0)
    	{
    		pre[i]+=pre[i-1];
    	}
    }
    
    sort(pre,pre+n-1);
    cout<<pre[n-2]+1<<endl;
    return 0;
}
