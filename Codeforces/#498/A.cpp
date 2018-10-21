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
    ll a[n];
    for(ll i=0;i<n;i++)
    	cin>>a[i];
    for(ll i=0;i<n;i++)
    {
    	if(a[i]%2==0)
    		cout<<a[i]-1<<" ";
    	else
    		cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
