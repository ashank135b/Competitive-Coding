#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 200005

int main()
{
    IOS;
    ll n,k;
    cin>>n>>k;
    vll ans;
    ll t=2*k+1;
    if(k==0)
    {
    	cout<<n<<endl;
    	for(ll i=1;i<=n;i++)
    		cout<<i<<" ";
    	cout<<endl;
    	return 0;
    }

    if(n<=t)
    {
    	cout<<1<<endl;
    	if(n>k+1)
    		cout<<k+1<<endl;
    	else
    		cout<<n<<endl;
    	return 0;
    }

    ll s=-1,rem=k;
   	ll e=-1;
   	ll left=-1;
   	if(n%t!=0)
   	{
   		ll flag=0;
   		for(ll in=0;in<=1;in++)
   		{
   			for(ll i=0;i<=rem;i++)
   			{
   				for(ll j=0;j<=rem;j++)
   				{
   					left=n-(1+rem+i)-in*(1+rem+j);
   					if(left>=0&&left%t==0)
   					{
   						flag=1;
   						ans.pb(1+i);
   						//cout<<"---"<<1+i<<endl;
   						s=1+i;
   						if(in!=0)
   						{
   							//cout<<"---"<<n-j<<endl;
   							ans.pb(n-j);
   							e=n-j;
   						}
   						else
   							e=n;
   						break;
   					}
   				}
   				if(flag==1)
   					break;
   			}
   			if(flag==1)
   				break;
   		}
   	}
   	if(left==-1)
   	{
   		s=0;
   		while(s<n)
   		{
   			s+=rem+1;
   			ans.pb(s);
   			s+=rem;
   		}
   	}
   	else
   	{
   		s+=rem;
   		while(s<e&&s<n)
   		{
   			s+=rem+1;
   			if(s!=e)
   				ans.pb(s);
   			s+=rem;
   		}
   	}
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++)
    	cout<<ans[i]<<" ";
    cout<<endl;

    return 0;
}
