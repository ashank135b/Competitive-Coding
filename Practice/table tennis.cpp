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
    ll n,k;
    cin>>n>>k;
    vll a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll w=1,i=2,p1=0,ans,p2=1,ind;
    ans=max(a[p1],a[p2]);
    ll t=min(a[p1],a[p2]);
    if(n==2)
    {
        cout<<ans<<endl;
        return 0;
    }
    if(a[p1]>a[p2])
    {
        ind=p1;
        a.pb(a[p2]);
        a.erase(a.begin()+p2);
    }
    else
    {
        ind=p2;
        a.pb(a[p1]);
        a.erase(a.begin()+p1);
    }
    while(w!=k)
    {
        if(ans>a[1])
        {
            w++;
            a.pb(a[1]);
            a.erase(a.begin()+1);
        }
        else
        {
            w=1;
            a.pb(a[0]);
            a.erase(a.begin());
            ans=a[0];
        }
        if(a[1]==t)
            break;
    }
    cout<<ans<<endl;
    return 0;
}
