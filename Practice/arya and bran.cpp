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
    ll n,k,ans=0;
    cin>>n>>k;
    vll a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        if(a[i]<=8)
        {
            k-=a[i];
            ans++;
        }
        else if(a[i]>8)
        {
            k-=8;
            if(i<n-1)
            {
                a[i+1]+=a[i]-8;
            }
            ans++;
        }
        if(k<=0)
        {
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
