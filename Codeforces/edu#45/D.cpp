#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1000000009

int main()
{
    IOS;
    ll n,a,b;
    cin>>n>>a>>b;
    bool A[n][n];
    memset(A,false,sizeof(A));
    if(min(a,b)>1)
    {
    	cout<<"NO"<<endl;
    	return 0;
    }
    if(a==1&&b==1)
    {
    	if(n==2||n==3)
    	{
    		cout<<"NO"<<endl;
    		return 0;
    	}
    	cout<<"YES"<<endl;
    	for(ll i=1;i<n;i++)
    	{
    		A[i-1][i]=1;
    		A[i][i-1]=1;
    	}
    	for(ll i=0;i<n;i++)
    	{
    		for(ll j=0;j<n;j++)
    			cout<<A[i][j];
    		cout<<endl;
    	}
    	return 0;
    }
    bool num=false;
    if(a==1)
    	num=1;
    for(ll i=n-max(a,b);i>0;i--)
    {
    	A[i-1][i]=1;
    	A[i][i-1]=1;
    }
    if(num==1)
	    for(ll i=0;i<n;i++)
	    {
	    	for(ll j=0;j<n;j++)
	    	{
	    		if(i!=j)
	    			A[i][j]^=1;
	    	}
	    }
	cout<<"YES"<<endl;
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			cout<<A[i][j];
		}
		cout<<endl;
	}

    return 0;
}
