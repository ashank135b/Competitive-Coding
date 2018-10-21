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
    ll ans=0;
    while(n>=100)
    {
    	n-=100;
    	ans++;
    }
    while(n>=20)
    {
    	n-=20;
    	ans++;
    }
    while(n>=10)
    {
    	n-=10;
    	ans++;
    }
    while(n>=5)
    {
    	n-=5;
    	ans++;
    }
    ans+=n;
    cout<<ans<<endl;
    return 0;
}
