#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<bool> vb;

#define PI 3.141592653589793
#define MOD 1000000009

int main()
{
    IOS;
    ll n,m,b=0,imax=-1,imin=101,jmax=-1,jmin=101;
    cin>>n>>m;
    char a[n][m];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='B')
            {
                b++;
                imax=max(imax,i);
                imin=min(imin,i);
                jmax=max(jmax,j);
                jmin=min(jmin,j);
            }
        }
    }
    if(b==0)
    {
        cout<<1<<endl;
        return 0;
    }
    if(imax==-1||imin==101||jmax==-1||jmin==101)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll id=imax-imin+1,jd=jmax-jmin+1;
    if(id>m||jd>n)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll d=max(id,jd);
    d*=d;
    cout<<d-b<<endl;
    return 0;
}
