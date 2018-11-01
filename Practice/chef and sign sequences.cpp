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
    vll v;
    while(t--)
    {
        string str;
        cin>>str;
        vc s;
        for(ll i=0;i<str.size();i++)
        {
            if(str[i]!='=')
            {
                s.pb(str[i]);
            }
        }
        ll n=0,min=0,max=0;
        v.pb(0);
        v.pb(0);
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='>')
            {
                if(i<s.size()-1&&s[i+1]=='<'&&n>min)
                    n=min;
                else
                {
                    n--;
                }
                v.pb(n);
            }
            else if(s[i]=='<')
            {
                if(i<s.size()-1&&s[i+1]=='>'&&n<max)
                    n=max;
                else if(i<s.size()-1&&s[i+1]=='=')
                {

                }
                else
                {
                    n++;
                }
                v.pb(n);
            }
            if(min>n)
                min=n;
            if(max<n)
                max=n;
        }
        sort(v.begin(),v.end());
        cout<<v[v.size()-1]-v[0]+1<<endl;
        v.clear();
    }
    return 0;
}
