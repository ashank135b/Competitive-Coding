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
    ll n,k;
    cin>>n>>k;
    char ans[4][n];
    for(ll i=0;i<4;i++)
    	for(ll j=0;j<n;j++)
    		ans[i][j]='.';
    
    

    if(k%2==0)
    {

    	for(ll i=1;i<n-1;i++)
    	{
    		if(k==0)
    			break;
    		ans[1][i]='#';
    		ans[2][i]='#';
    		k-=2;
    	}
    }
    else
    {
    	ll l=1,r=n-2;
    	ll mid=(l+r)/2;
    	ans[1][mid]='#';
    	k--;
    	l=mid-1;r=mid+1;
    	while(l>=1&&r<=n-2)
    	{
    		if(k==0)
    			break;
    		ans[1][l--]='#';
    		k--;
    		if(k==0)
    			break;
    		ans[1][r++]='#';
    		k--;
    	}
    	if(k!=0)
    	{
	    	l=mid-1;r=mid+1;
	    	while(l>=1&&r<=n-2)
	    	{
	    		if(k==0)
	    			break;
	    		ans[2][l--]='#';
	    		k--;
	    		if(k==0)
	    			break;
	    		ans[2][r++]='#';
	    		k--;
	    	}
	    	if(k!=0)
	    	{
		    	ans[2][mid]='#';
		    	k--;
	    	}
	    }
    }




    cout<<"YES"<<endl;

    for(ll i=0;i<4;i++)
    {
    	for(ll j=0;j<n;j++)
    	{
    		cout<<ans[i][j];
    	}
    	cout<<endl;
    }

    return 0;
}
