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
    string s,t;
    cin>>s>>t;
    ll done=-1;
    for(ll i=0;i<t.size();i++)
    {
    	if(t[i]>='a'&&t[i]<='z')
    		continue;
    	else
    	{
    		cout<<"NO"<<endl;
    		return 0;
    	}
    }
    if(n>m+1)
    {
    	cout<<"NO"<<endl;
    	return 0;
    }

    for(ll i=0;i<s.size();i++)
    {
    	if(s[i]=='*')
    	{
    		break;
    	}
    	if(s[i]!=t[i])
    	{
    		cout<<"NO"<<endl;
    		return 0;
    	}
    	done=i;
    }
    if(done==t.size()-1)
    {
    	cout<<"YES"<<endl;
    	return 0;
    }
    ll j=t.size()-1;
    for(ll i=s.size()-1;i>=0;i--)
    {
    	if(s[i]=='*')
    		break;
    	if(s[i]!=t[j]||j==done||i==done)
    	{
    		cout<<"NO"<<endl;
    		return 0;
    	}
    	j--;
    }
    cout<<"YES"<<endl;
    return 0;
}
