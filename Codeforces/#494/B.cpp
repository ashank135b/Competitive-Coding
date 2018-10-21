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
    ll a,b,x;
    cin>>a>>b>>x;
    x--;
    a--;
    b--;
    string s="01";
    for(ll i=2;i<=x;i+=2)
    {
    	s+="01";
    	a--;
    	b--;
    }
    if(x%2)
    {
    	if(a>0)
    	{
    		s+='0';
    		a--;
    	}
    	else
    	{
    		s='1'+s;
    		b--;
    	}
    }
    for(ll i=0;i<s.size();i++)
    {
    	cout<<s[i];
    	if(s[i]=='0')
    	{
    		while(a>0)
    		{
    			cout<<'0';
    			a--;
    		}
    	}
    	else
    	{
    		while(b>0)
    		{
    			cout<<'1';
    			b--;
    		}
    	}
    }
    cout<<endl;
    return 0;
}
