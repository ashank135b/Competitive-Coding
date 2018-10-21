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
    ll n,r;
    cin>>n>>r;
    n=1<<n;
    ll c[n],sum=0;
    for(ll i=0;i<n;i++)
    {
    	cin>>c[i];
    	sum+=c[i];
    }
    cout<<fixed<<setprecision(10)<<endl;
    cout<<(double)sum/n<<endl;
    for(ll i=0;i<r;i++)
    {
    	ll idx,val;
    	cin>>idx>>val;
    	sum-=c[idx];
    	c[idx]=val;
    	sum+=c[idx];
    	cout<<(double)sum/n<<endl;
    }

     
    return 0;
}
