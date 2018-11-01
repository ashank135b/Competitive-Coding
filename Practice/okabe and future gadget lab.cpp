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

ll binarySearch(vll & arr,ll l,ll r,ll x)
{
  while (l <= r)
  {
    ll m = l + (r-l)/2;

    // Check if x is present at mid
    if (arr[m] == x)
        return m;

    // If x greater, ignore left half
    if (arr[m] < x)
        l = m + 1;

    // If x is smaller, ignore right half
    else
         r = m - 1;
  }

  // if we reach here, then element was not present
  return -1;
}
int main()
{
    IOS;
    ll n;
    cin>>n;
    ll a[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    if(n==1&&a[0][0]!=1)
    {
        cout<<"No";
        exit(0);
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(a[i][j]>1)
            {
                vll num1,num2,num;
                for(ll k=i-1;k>=0;k--)
                {
                    num1.pb(a[k][j]);
                }
                for(ll k=i+1;k<n;k++)
                {
                    num1.pb(a[k][j]);
                }
                for(ll k=j-1;k>=0;k--)
                {
                    num2.pb(a[i][k]);
                }
                for(ll k=j+1;k<n;k++)
                {
                    num2.pb(a[i][k]);
                }
                for(ll k=0;k<num1.size();k++)
                {
                    for(ll l=0;l<num2.size();l++)
                    {
                        num.pb(num1[k]+num2[l]);
                    }
                }
                sort(num.begin(),num.end());
                if(binarySearch(num,0,num.size(),a[i][j])==-1)
                {
                    cout<<"No";
                    exit(0);
                }
                num.clear();
                num1.clear();
                num2.clear();
            }
        }
    }
    cout<<"Yes";
    return 0;
}
