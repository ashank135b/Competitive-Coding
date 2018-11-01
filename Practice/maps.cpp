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

int main()
{
    IOS;
    ll q,n,x;
    string s;
    cin>>q;
    map<string,ll> m;
    while(q--)
    {
        cin>>n>>s;
        if(n==1)
        {
            cin>>x;
            map<string,ll>::iterator it=m.find(s);
            if(it==m.end())
                m.insert(make_pair(s,x));
            else
                m[s]+=x;
        }
        else if(n==2)
        {
            m.erase(s);
        }
        else if(n==3)
        {
            map<string,ll>::iterator it;
            ll ans=0;
            for(it=m.begin();it!=m.end();it++)
            {
                if(!s.compare(it->first))
                {
                    ans+=it->second;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
