#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct rating
{
    ll index,val;
};
bool compv(rating a,rating b)
{
    return (a.val<b.val);
}
bool compi(rating a,rating b)
{
    return (a.index<b.index);
}
int main()
{
    ll n;
    cin>>n;
    rating r[n];
    for(ll i=0;i<n;i++)
    {
        r[i].index=i;
        cin>>r[i].val;
    }
    sort(r,r+n,compv);
    for(ll i=1;i<n;i++)
    {
        if(r[i-1].val>=r[i].val)
        {
            r[i].val=r[i-1].val+1;
        }
    }
    sort(r,r+n,compi);
    for(ll i=0;i<n;i++)
    {
        cout<<r[i].val<<" ";
    }
    return 0;
}
