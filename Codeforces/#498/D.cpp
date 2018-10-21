#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 200009

int main()
{
	IOS;
	ll n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	ll ans=0;
	for(ll i=0;i<n/2;i++)
	{
		ll A[26];
		memset(A,0,sizeof(A));
		if(b[i]==b[n-i-1])
		{
			if(a[i]!=a[n-i-1])
			{
				ans++;
				//cout<<i<<" "<<ans<<endl;
			}
		}
		else
		{
			A[b[i]-'a']++;
			A[b[n-i-1]-'a']++;
			A[a[i]-'a']--;
			A[a[n-i-1]-'a']--;
			for(ll j=0;j<26;j++)
				if(A[j]>0)
				{
					ans+=A[j];
					//cout<<i<<" "<<ans<<endl;
				}
		}
	}
	if(n%2==1)
		if(a[n/2]!=b[n/2])
			ans++;
	cout<<ans<<endl;

	return 0;
}