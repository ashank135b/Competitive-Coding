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
    ll x,y,l,r,num=1;
    cin>>x>>y>>l>>r;
    vll num1,num2;
    num1.pb(1);
    num2.pb(1);
    while(num<=1e18/x)
    {
        num*=x;
        num1.pb(num);
    }
    num=1;
    while(num<=1e18/y)
    {
        num*=y;
        num2.pb(num);
    }
    vll v;
    v.pb(l-1);
    for(ll i=0;i<num1.size();i++)
    {
        for(ll j=0;j<num2.size();j++)
        {
            if(num1[i]+num2[j]>=l&&num1[i]+num2[j]<=r)
            {
                v.pb(num1[i]+num2[j]);
            }
        }
    }
    v.pb(r+1);
    sort(v.begin(),v.end());
    ll m=v[1]-v[0];
    for(ll i=2;i<v.size();i++)
    {
        if(m<v[i]-v[i-1])
        {
            m=v[i]-v[i-1];
        }
    }
    if(m==0||m==1)
        cout<<"0"<<endl;
    else
        cout<<m-1<<endl;
    return 0;
}
