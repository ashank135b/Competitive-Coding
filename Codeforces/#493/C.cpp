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
    ll n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    ll p=0,flag=1;
    for(ll i=0;i<n;i++)
    {
    	if(s[i]=='0'&&flag==1)
    	{
    		p++;
    		flag=0;
    	}
    	else if(s[i]=='1'&&flag==0)
    		flag=1;
    }
    if(p==0)
    	cout<<0<<endl;
    else
    	cout<<(p-1)*min(x,y)+y<<endl;
    return 0;
}
