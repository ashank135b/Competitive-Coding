#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll time=a[0],ans=1;
    for(ll i=1;i<n;i++)
    {
        if(time<=a[i])
        {
            ans++;
            time+=a[i];
        }
    }
    cout<<ans;
    return 0;
}
