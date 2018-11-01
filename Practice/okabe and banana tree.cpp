#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<bool> vb;

#define PI 3.141592653589793
#define MOD 1000000009

int main()
{
    IOS;
    ll m,b;
    cin>>m>>b;
    ll x,y,ans=0;
    for(ll y=0;y<=b;y++)
    {
        x=m*(b-y);
        ll temp=(x+1)*(y+1)*(x+y)/2;
        ans=max(ans,temp);
    }
    cout<<ans;
    return 0;
}
