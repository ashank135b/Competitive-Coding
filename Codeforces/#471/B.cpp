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
    string s;
    cin>>s;
    ll freq[26];
    memset(freq,0,sizeof(freq));

    for(ll i=0;i<s.size();i++)
    	freq[s[i]-'a']++;
    ll c=0;
    vll v;
    for(ll i=0;i<26;i++)
    {
    	if(freq[i])
    	{
    		v.pb(freq[i]);
    		c++;
    	}
    }
    if(c==1||c>4)
    {
    	cout<<"No"<<endl;
    	return 0;
    }
    if(c==4)
    {
    	cout<<"Yes"<<endl;
    	return 0;
    }
    if(c==2)
    {
    	if(v[0]>=2&&v[1]>=2)
    	{
    		cout<<"Yes"<<endl;
    		return 0;
    	}
    	cout<<"No"<<endl;
    	return 0;
    }
    if(c==3)
    {
    	for(ll i=0;i<v.size();i++)
    		if(v[i]>=2)
    		{
    			cout<<"Yes"<<endl;
    			return 0;
    		}
    	cout<<"No"<<endl;
    }

    return 0;
}
