#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a,ans;
    cin>>n>>m>>a;
    ans=(n/a)*(m/a);
    if(n%a!=0)
        ans+=(m/a);
    if(m%a!=0)
        ans+=(n/a);
    if(m%a!=0&&n%a!=0)
        ans++;
    cout<<ans;
    return 0;
}
