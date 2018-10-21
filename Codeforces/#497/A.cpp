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
    string s;
    cin>>s;
    ll flag=1;
    string vowel="aeiou";
    ll n=s.size();
    for(ll i=0;i<n-1;i++)
    {
    	bool v=false;
    	for(ll j=0;j<vowel.size();j++)
    	{
    		if(vowel[j]==s[i])
    		{
    			v=true;
    			break;
    		}
    	}
    	if(!v&&s[i]!='n')
    	{
    		v=false;
    		for(ll j=0;j<vowel.size();j++)
    		{	
    			if(vowel[j]==s[i+1])
    			{
    				v=true;
    				break;
    			}
    		}
    		if(!v)
    		{
    			//cout<<i<<endl;
    			flag=0;
    		}
    	}
    }
    if(!flag)
    {
    	cout<<"NO"<<endl;
    	return 0;
    }
   	bool v=false;
   	for(ll i=0;i<vowel.size();i++)
   		if(vowel[i]==s[n-1])
   		{
   			v=true;
   			break;
   		}
   	if(v||s[n-1]=='n')
   	{
   		cout<<"YES"<<endl;
   		return 0;
   	}
   	else
   		cout<<"NO"<<endl;

    return 0;
}
