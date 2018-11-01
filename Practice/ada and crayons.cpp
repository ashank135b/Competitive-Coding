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
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll u=0,d=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='U'&&s[i+1]=='D')
            {
                u++;
            }
            else if(s[i]=='D'&&s[i+1]=='U')
            {
                d++;
            }
        }
        if(s[s.size()-1]=='U')
            u++;
        else
            d++;
        if(d<=u)
            cout<<d<<endl;
        else
            cout<<u<<endl;
    }
    return 0;
}
