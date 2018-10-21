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
    ll a[n],b[m];
    ll ans[n][m];
    memset(ans,0,sizeof(ans));
    for(ll i=0;i<n;i++)
    	cin>>a[i];
    for(ll i=0;i<m;i++)
    	cin>>b[i];
    ll sum=0;
    for(ll i=0;i<n;i++)
    	sum^=a[i];
    for(ll i=0;i<m;i++)
    	sum^=b[i];
    if(sum!=0)
    {
    	cout<<"NO"<<endl;
    	return 0;
    }
    for(ll i=0;i<n;i++)
    	ans[i][m-1]=a[i];
    for(ll i=0;i<m;i++)
    	ans[n-1][i]=b[i];
    for(ll i=0;i<n-1;i++)
    	b[m-1]^=a[i];
    ans[n-1][m-1]=b[m-1];
    cout<<"YES"<<endl;
    for(ll i=0;i<n;i++)
    {
    	for(ll j=0;j<m;j++)
    		cout<<ans[i][j]<<" ";
    	cout<<endl;
    }
    
    return 0;
}
