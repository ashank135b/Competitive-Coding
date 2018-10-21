#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 200005

int main()
{
    IOS;
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    ll g=__gcd(x,y);
    x/=g;
    y/=g;
    ll c1=a/x,c2=b/y;
    cout<<min(c1,c2)<<endl;
    return 0;
}
