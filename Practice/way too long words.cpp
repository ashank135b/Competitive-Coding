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
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s.size()>10)
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
