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
    ll n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    while(k--)
    {
    	ll t1,t2,f1,f2;
    	cin>>t1>>f1>>t2>>f2;
    	ll ans=0;
    	ll cur=f1;
    	if(t1==t2)
    	{
    		cout<<abs(f1-f2)<<endl;
    		continue;
    	}
    	if(cur<a||cur>b)
    	{
    		
    		ans+=min(abs(cur-a),abs(cur-b));
    		if(abs(cur-a)<abs(cur-b))
    			cur=a;
    		else
    			cur=b;
    		
    	}
    	ans+=abs(t1-t2);
    	ans+=abs(cur-f2);
    	cout<<ans<<endl;
    }
    return 0;
}
