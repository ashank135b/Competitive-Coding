#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct mouse
{
    ll val;
    string type;
}s[300000];
bool comp(mouse a,mouse b)
{
    return (a.val<b.val);
}
int main()
{
    ll a,b,c,m;
    cin>>a>>b>>c;
    cin>>m;
    for(ll i=0;i<m;i++)
    {
        cin>>s[i].val>>s[i].type;
    }
    sort(s,s+m,comp);
    ll cost=0,n=0;
    for(ll i=0;i<m;i++)
    {
        if(!s[i].type.compare("USB")&&a>0)
        {
            cost+=s[i].val;
            a--;
            n++;
        }
        else if(!s[i].type.compare("PS/2")&&b>0)
        {
            cost+=s[i].val;
            b--;
            n++;
        }
        else
        {
            if(c>0)
            {
                cost+=s[i].val;
                c--;
                n++;
            }
        }
    }
    cout<<n<<" "<<cost;
    return 0;
}
