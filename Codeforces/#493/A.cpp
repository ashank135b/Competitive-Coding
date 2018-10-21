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
    ll a[n],mini=0;
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	if(a[mini]>a[i])
    		mini=i;
    }
    if(n==1||(n==2&&(a[1]==a[0])))
    {
    	cout<<-1<<endl;
    	return 0;
    }
    cout<<n-1<<endl;
    for(ll i=0;i<n;i++)
    	if(i!=mini)
    		cout<<i+1<<" ";
    cout<<endl;
    return 0;
}
