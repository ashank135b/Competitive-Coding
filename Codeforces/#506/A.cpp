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
    ll n,k;
    cin>>n>>k;
    string t;
    cin>>t;
   	string s=t;
   	ll cnt=0,i=0;
   	while(cnt<k)
   	{
   		if(i==s.size())
   		{
   			s.pb(t[0]);
   		}
   		if(s[i]==t[0])
   		{
   			ll flag=1;
   			ll sz=s.size();
   			for(ll j=1;j<n;j++)
   			{
   				if(i+j>sz-1)
   				{
   					s.pb(t[j]);
   				}
   				else if(s[i+j]!=t[j])
   				{
   					flag=0;
   					break;
   				}
   			}
   			if(flag)
   			{
   				cnt++;
   			}
   			i++;
   		}
   		else if(i==s.size()-1)
   		{
   			s.pb(t[0]);
   			i++;
   		}
   		else
   		{
   			i++;
   		}
   	}
   	cout<<s<<endl;
    return 0;
}
