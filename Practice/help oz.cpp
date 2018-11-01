//TLE for last test case
//IMPROVE

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
    ll m;
    cin>>m;
    if(m<=0)
        return 0;
    if(m==1)
    {
        int a;
        cin>>a;
        cout<<a<<endl;
    }
    vll v(m);
    for(ll i=0;i<m;i++)
    {
        cin>>v[i];
        if(v[i]<=0)
            return 0;
    }
    sort(v.begin(),v.end());
    vll diff,ans;
    for(ll i=0;i<m-1;i++)
        diff.pb(v[i+1]-v[i]);
    sort(diff.begin(),diff.end());
    ll min=diff[0];
    //cout<<min<<endl;
    /*for(ll i=0;i<diff.size();i++)
        cout<<diff[i]<<" ";
    cout<<endl;*/

    for(ll i=2;i<=min;i++)
    {
        if(min%i==0){
        //cout<<"i:"<<i<<endl;
        ll flag=1;
        for(ll j=0;j<diff.size();j++)
        {
            if(diff[j]%i!=0)
                flag=0;
        }
        if(flag)
            ans.pb(i);
        }
    }
    for(ll i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
