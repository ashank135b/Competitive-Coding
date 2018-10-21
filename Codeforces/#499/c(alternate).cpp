#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1005

ll n,m;
ll a[N],b[N];

bool check(double cur)
{
    double w=m+cur;
    for(ll i=0;i<n;i++)
    {
        w-=(w/a[i]);
        w-=(w/b[i]);
        if(w<m)
            return false;
    }
    return true;
}

double bs(double lo,double hi)
{
    for(ll i=0;i<1000;i++)
    {
        double mid=(lo+hi)/2;
        if(check(mid))
            hi=mid;
        else
            lo=mid;
    }
    return lo;
}

int main()
{
    IOS;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
    	cin>>b[i];
    }
    double ans=bs(0,1e10);
    if(ans>1e9)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<fixed<<setprecision(12);
    cout<<ans<<endl;
    return 0;
}
