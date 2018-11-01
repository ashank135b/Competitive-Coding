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
    ll c,v0,v1,a,l;
    cin>>c>>v0>>v1>>a>>l;
    ll read=v0,ans=1,speed=v0,co=1;
    while(read<c)
    {
        speed+=a;
        if(speed<v1)
            read+=v0+co*a-l;
        else
            read+=v1-l;
        ans++;
        co++;
    }
    cout<<ans;
    return 0;
}
