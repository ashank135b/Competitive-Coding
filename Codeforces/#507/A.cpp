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
   	ll n,w,b;
   	cin>>n>>w>>b;
   	ll a[n];
   	for(ll i=0;i<n;i++)
   		cin>>a[i];
   	ll i=0,j=n-1;
   	ll ans=0;
   	ll mn=min(w,b);
   	while(i<=j)
   	{
   		if(a[i]==2&&a[j]==2)
   		{
   			ans+=mn;
   			if(i!=j)
   				ans+=mn;
   		}
   		if(a[i]!=a[j])
   		{
   			if(a[i]!=2&&a[j]!=2)
   			{
   				cout<<-1<<endl;
   				return 0;
   			}
   			else
   			{
   					if(a[i]==2)
   					{
   						if(a[j]==1)
   							ans+=b;
   						else
   							ans+=w;
   					}
   					if(a[j]==2)
   					{
   						if(a[i]==1)
   							ans+=b;
   						else
   							ans+=w;
   					}
   			}
   		}
   		i++;
   		j--;
   	}
   	cout<<ans<<endl;
    return 0;
}
