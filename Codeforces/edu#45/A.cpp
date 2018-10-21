#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1000000009

int main()
{
    IOS;
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll rem=n%m;
    ll sub=n/m;
    ll ans1,ans2;
    if(sub==0)
    {
    	ans1=rem*b;
    	ans2=(m-rem)*a;
    }
    else
    {
    	ans1=(m-rem)*a;
    	ans2=rem*b;
    }
    cout<<min(ans2,ans1)<<endl;
    
    return 0;
}
