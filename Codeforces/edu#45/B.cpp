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
    ll n,k;
    cin>>n>>k;
    vll a(n);
    for(ll i=0;i<n;i++)
    	cin>>a[i];
    sort(a.begin(),a.end());
    //a.pb(LONG_MAX);
    ll ind=0;
    ll del=0;
    //for(ll i=0;i<a.size();i++)
    	//cout<<a[i]<<" ";
   	//cout<<endl;
    while(ind<a.size())
    {
    	vll::iterator it=upper_bound(a.begin(),a.end(),a[ind]+k);
    	it--;
    	//cout<<*it<<endl;
    	if(*it!=a[ind])
    	{
    		del++;
            ind++;
    	}
    	else
    	{
    		ind++;
    	}
    	//cout<<ind<<endl;
    	//for(ll i=0;i<a.size();i++)
    	//cout<<a[i]<<" ";
    	//cout<<endl;
    }
    //for(ll i=0;i<a.size();i++)
    	//cout<<a[i]<<" ";
   	//cout<<endl;
    cout<<a.size()-del<<endl;
    return 0;
}
