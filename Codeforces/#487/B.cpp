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
    ll p,n;
    cin>>n>>p;
    string s;
    cin>>s;
    ll flag=0;
    for(ll i=0;i<n;i++)
    {
    	if(s[i]!='.')
    	{
    		ll num=s[i]-'0';
    		ll j=i+p;
    		while(j<n)
    		{
    			num^=1;
    			if(s[j]==s[i])
    			{
    				break;
    			}
    			if(s[j]=='0'+num)
    			{
    				flag=1;
    				break;
    			}
    			if(s[j]=='.')
    			{
    				s[j]='0'+num;
    				flag=1;
    			}
    			j+=p;
    		}
    		j=i-p;
    		num=s[i]-'0';
    		while(j>=0)
    		{
    			num^=1;
    			if(s[i]==s[j])
    				break;
    			if(s[j]=='0'+num)
    			{
    				flag=1;
    				break;
    			}
    			if(s[j]=='.')
    			{
    				s[j]='0'+num;
    				flag=1;
    			}
    			j-=p;
    		}
    	}
    }
    
    ll flag2=0;
    for(ll i=0;i<n;i++)
    {
    	if(s[i]=='.')
    	{
    		s[i]='1';
    		if(i+p<n)
    		{
    			s[i+p]='0';
    			flag2=1;
    		}
    		if(i-p>=0)
    		{
    			s[i-p]='0';
    			flag2=1;
    		}
    	}
    	if(flag2)
    		break;
    }
    if(flag||flag2)
    {
    	for(ll i=0;i<n;i++)
    	{
    		if(s[i]=='.')
    			cout<<"0";
    		else
    			cout<<s[i];
    	}
    	cout<<endl;
    	return 0;
    }

    cout<<"No"<<endl;

    return 0;
}
