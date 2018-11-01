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
    ll n,m,l,r,c=0,t,x;
    cin>>n>>m;
    vll p;
    for(ll i=0;i<n;i++)
    {
        cin>>t;
        p.pb(t);
    }
    while(m--)
    {
        c=0;
        cin>>l>>r>>x;
        for(ll i=l-1;i<r;i++)
        {
            if(p[i]<p[x-1])
                c++;
        }
        if(l-1+c==x-1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
