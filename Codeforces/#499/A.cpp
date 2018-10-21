#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 305

int main()
{
    IOS;
    ll n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    ll ans=LONG_MAX;
    if(k==1)
    {
    	cout<<a[0]-'a'+1<<endl;
    	return 0;
    }
    //cout<<a<<endl;
    for(ll i=0;i<n;i++)
    {
    	ll sum=a[i]-'a'+1,cnt=1;
    	char last=a[i];
    	for(ll j=i+1;j<n;j++)
    	{
    		if(a[j]>=last+2)
    		{
    			last=a[j];
    			if(cnt==k)
    				break;
    			sum+=a[j]-'a'+1;
    			cnt++;
    		}
    	}
    	if(cnt==k)
    	{
    		ans=min(ans,sum);
    	}
    }
    if(ans==LONG_MAX)
    	cout<<-1<<endl;
    else
    	cout<<ans<<endl;
    return 0;
}
