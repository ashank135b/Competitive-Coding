#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define MOD 1000000009


int main()
{
    IOS;
    string s;
    string check[]={"00","25","50","75"};
    cin>>s;
    ll n=s.size();
    ll ans=LONG_MAX;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(j==i)
                continue;
            string t=s;
            ll count=0;
            for(ll k=i;k<n-1;k++)
            {
                swap(t[k],t[k+1]);
                count++;
            }
            for(ll k=j-(j>i);k<n-2;k++)
            {
                swap(t[k],t[k+1]);
                count++;
            }
            ll pos=-1;
            for(ll k=0;k<n;k++)
                if(t[k]!='0')
                {
                    pos=k;
                    break;
                }
            for(ll k=pos;k>0;k--)
            {
                swap(t[k],t[k-1]);
                count++;
            }

            for(ll i=0;i<4;i++)
            {
                if(t[n-2]==check[i][0]&&t[n-1]==check[i][1])
                    ans=min(ans,count);
            }

        }
    }
    if(ans==LONG_MAX)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;
    return 0;
}
