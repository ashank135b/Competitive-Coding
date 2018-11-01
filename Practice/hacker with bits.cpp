#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<bool> vb;

#define PI 3.141592653589793
#define MOD 1000000009
int count(int n,vi & a)
{
    int ones=0;
    int ret=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            ones++;
        }
        else
            ones=0;
        ret=max(ret,ones);
    }
    return ret;
}
int main()
{
    IOS;
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=count(n,a);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(a[i],a[j]);
            ans=max(ans,count(n,a));
            swap(a[i],a[j]);
        }
    }
    cout<<ans;
    return 0;
}
