#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        while(v[i]%2==0)
            v[i]/=2;
        while(v[i]%3==0)
            v[i]/=3;
    }
    for(ll i=1;i<n;i++)
    {
        if(v[i]!=v[i-1])
        {
            cout<<"No";
            exit(0);
        }
    }
    cout<<"Yes";
    return 0;
}
