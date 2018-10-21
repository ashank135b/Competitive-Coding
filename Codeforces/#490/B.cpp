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
    ll n;
    cin>>n;
    string str;
    cin>>str;
    for(ll d=1;d<=n;d++)
    {
    	if(n%d==0)
    	{
    		ll s=0,e=d-1;
    		while(s<e)
    		{
    			swap(str[s],str[e]);
    			s++;
    			e--;
    		}
    		//cout<<str<<endl;
    	}
    }
    cout<<str<<endl;

    return 0;
}
