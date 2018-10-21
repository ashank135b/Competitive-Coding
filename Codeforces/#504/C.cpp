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
    ll k,n;
    cin>>n>>k;
    string s;
    cin>>s;
    ll del=(n-k)/2;
    ll f=0,b=0;
    for(ll i=0;i<n;i++)
    {
    	if(s[i]=='(')
    	{
    		if(f!=del)
    		{
    			f++;
    			continue;
    		}
    		else
    			cout<<s[i];
    	}
    	else
    	{
    		if(b!=del)
    		{
    			b++;
    			continue;
    		}
    		else
    			cout<<s[i];

    	}
    }
    cout<<endl;
    return 0;
}
