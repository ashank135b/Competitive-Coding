#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<bool> vb;

#define PI 3.141592653589793
#define MOD 1000000009

int main()
{
    IOS;
    ll n,k;
    cin>>n>>k;
    vll a(n);
    bool ans[n];
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	ans[i]=true;
    }
    //cout<< "hi"<<endl;
    for(ll i=0;i<n;i++)
    {
    	for(ll j=i+1;j<n;j++)
    	{
    		if(a[i]==a[j]&&ans[i]==true)
    		{
    			ans[j]=false;
    		}
    	}
    }
    vll p;
    for(ll i=0;i<n;i++)
    {
    	if(ans[i]==true)
    	{
    		p.pb(i+1);
    	}
    }
    if(p.size()>=k)
    {
    	cout<<"YES"<<endl;
    	for(ll i=0;i<k;i++)
    		cout<<p[i]<<" ";
    	cout<<endl;
    }
    else
    	cout<<"NO"<<endl;

    return 0;
}
