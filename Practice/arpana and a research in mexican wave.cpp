#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<bool> vb;

#define PI 3.141592653589793
#define MOD 1000000009
template <class X>
X gcd(X a,X b)
{
	if(a%b==0)
		return b;
	else
    return gcd(b,a%b);
}
template <class X>
X bs(X A[],X lo,X hi,X x)
{
    if(hi>=lo)
    {
        X mid=(hi+lo)/2;
        if(A[mid]==x)
            return mid;
        else if(A[mid]>x)
            return bs(A,lo,mid-1,x);
        else
            return bs(A,mid+1,hi,x);
    }
    return -1;
}

int main()
{
    IOS;
    ll n,k,t,c=1;

    cin>>n>>k>>t;
    /*bool s[n+1]={false};
    for(ll i=1;i<=n+k;i++)
    {
        if(i==t)
        {
            break;
        }
        if(i<=k)
        {
            s[i]=true;
        }
        else if(i<=n)
        {
            s[i]=true;
            s[i-k]=false;
        }
        else
        {
            s[i-k]=false;
        }
    }
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        if(s[i]==true)
            ans++;
    }
    cout<<ans<<endl;*/

    if(t<=k)
    {
        cout<<t<<endl;
    }
    else if(t<=n)
    {
        cout<<k<<endl;
    }
    else
    {
        cout<<k-(t-n)<<endl;
    }
    return 0;
}
