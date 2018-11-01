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

int a[100000],st[400000];

void build(int node,int L,int R)
{
    if(L==R)
        st[node]=a[L];
    else
    {
        int m=(L+R)/2;
        build(2*node,L,m);
        build(2*node+1,m+1,R);
        st[node]=min(st[2*node],st[2*node+1]);
    }
}

void update(int node,int L,int R,int val,int pos)
{
    if(L==R)
    {
        a[pos]=val;
        st[node]=val;
    }
    else
    {
        int m=(L+R)/2;
        if(L<=node && node<=m)
            update(2*node,L,m,val,pos);
        else
            update(2*node+1,m+1,R,val,pos);
        st[node]=min(st[2*node],st[2*node+1]);
    }
}

int query(int node,int L,int R,int l,int r)
{
    if(l>R||r<L)
        return 200000;
    if(l<=L&&R<=r)
        return st[node];
    int m=(L+R)/2;
    return min(query(2*node,L,m,l,r),query(2*node+1,m+1,R,l,r));
}

int main()
{
    IOS;
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++)
        cin>>a[i];
    build(1,0,n-1);
    while(q--)
    {
        char ch;
        int x,y;
        cin>>ch>>x>>y;
        if(ch=='q')
            cout<<query(1,0,n-1,x-1,y-1)<<endl;
        else
            update(1,0,n-1,y,x-1);
    }
    //for(int i=0;i<n;i++)
        //cout<<a[i]<<" ";
    return 0;
}
