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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll freq[26]={0};
    for(ll i=0;i<n;i++)
    {
    	freq[s[i]-'a']++;
    }
    
    for(ll i=0;i<26;i++)
    {
    	if(k==0)
    		break;
    	if(freq[i]<=k)
    	{
    		//cout<<i<<" "<<freq[i]<<" "<<k<<endl;
    		k-=freq[i];
    		freq[i]=0;
    		//cout<<i<<" "<<freq[i]<<" "<<k<<endl;
    	}
    	else
    	{

    		freq[i]-=k;
    		k=0;
    		//cout<<i<<" "<<freq[i]<<endl;
    	}
    }

    bool present[n]={true};

    for(ll i=n-1;i>=0;i--)
    {
    	if(freq[s[i]-'a']>0)
    	{
    		present[i]=true;
    		freq[s[i]-'a']--;
    	}
    	else
    		present[i]=false;
    }

    for(ll i=0;i<n;i++)
    	if(present[i])
    		cout<<s[i];
    cout<<endl;

    return 0;
}
