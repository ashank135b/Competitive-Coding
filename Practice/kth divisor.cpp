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
    ll n,k;
    cin>>n>>k;
    vll div;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            div.pb(i);
            if(i*i!=n)
                div.pb(n/i);
        }
    }
    sort(div.begin(),div.end());
    if(k>div.size())
        cout<<"-1"<<endl;
    else
        cout<<div[k-1]<<endl;
    return 0;
}
