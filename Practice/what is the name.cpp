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
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        s[0]=toupper(s[0]);
        cout<<s[0];
        ll index=1;
        for(ll i=1;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                s[i]=tolower(s[i]);
            }
            else
            {
                s[i+1]=toupper(s[i+1]);
                cout<<". "<<s[i+1];
                i++;
                index=i+1;
            }
        }
        for(ll i=index;i<s.size();i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
