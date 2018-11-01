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
    ll q,x,y;
    cin>>q;
    set<ll> s;
    while(q--)
    {
        cin>>y>>x;
        if(y==1)
        {
            s.insert(x);
        }
        else if(y==2)
        {
            s.erase(x);
        }
        else if(y==3)
        {
            set<ll>::iterator itr=s.find(x);
            if(itr==s.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}
