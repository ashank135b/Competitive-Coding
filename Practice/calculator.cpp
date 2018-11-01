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
    ll t,b,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>b;

        ll h=n/2,i;
        if(n<=b)
        {
            i=0;
        }
        else if(h<b)
        {
            i=1;
        }
        else if(h%b==0)
        {
            i=h/b;
        }
        else if(h%b!=0)
        {
            ll x,y;
            x=h/b;
            y=h/b+1;
            if((n-b*x)*x>(n-b*y)*y)
                i=x;
            else
                i=y;
        }
        ll ans=(n-b*i)*i;
        cout<<ans<<endl;
    }
    return 0;
}
