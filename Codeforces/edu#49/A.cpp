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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	string s;
    	cin>>s;
    	ll flag=1,i=0,j=n-1;
    	while(i<j)
    	{
    		if(abs(s[i]-s[j])!=2&&abs(s[i]-s[j])!=0)
    		{
    			flag=0;
    			break;
    		}
    		i++;
    		j--;
    	}
    	if(flag)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    return 0;
}
