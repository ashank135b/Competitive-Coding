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
    ll n;
    cin>>n;
    string s[n];
    bool done[n]={false};
    bool dis[n][26];
    memset(dis,false,sizeof(dis));
    for(ll i=0;i<n;i++)
    {
    	cin>>s[i];
    	for(ll j=0;j<s[i].size();j++)
    		dis[i][s[i][j]-'a']=true;
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
    	if(done[i]==true)
    		continue;
    	//done[i]=true;
    	if(!done[i])
    	for(ll j=i+1;j<n;j++)
    	{
    		if(!done[j])
    		{
    			ll flag=0;
    			for(ll k=0;k<26;k++)
    			{
    				if(dis[i][k]==dis[j][k])
    					continue;
    				else
    				{
    					flag=1;
    					break;
    				}
    			}
    			if(flag==1)
	    			continue;
    			done[i]=true;
    			done[j]=true;
    		}
    	}
    	ans++;
    }
    cout<<ans<<endl;



    return 0;
}
