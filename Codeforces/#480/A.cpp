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
    vll pearl;
    ll count=0;
    for(ll i=0;i<s.size();i++)
    {
    	if(s[i]=='-')
    		count++;
    	else
    	{
    		pearl.pb(count);
    		count=0;
    	}
    }
    if(pearl.size()==0)
    {
    	cout<<"YES"<<endl;
    	return 0;
    }

    pearl[0]+=count;
    ll sum=0;
    for(ll i=0;i<pearl.size();i++)
    	sum+=pearl[i];

    if(sum%pearl.size()==0)
    {
    	cout<<"YES"<<endl;
    }
    else
    {
    	cout<<"NO"<<endl;
    }

    return 0;
}
