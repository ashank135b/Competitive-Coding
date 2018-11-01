#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<bool> vb;

#define PI 3.141592653589793
#define MOD 1000000009
template <class X>
X gcd(X a,X b)
{
	if(a%b==0)
		return b;
		else
			return gcd(b,a%b);
}


int main()
{
    IOS;
    string l1,l2;
    cin>>l1>>l2;
    string s;
    cin>>s;
    char ch;
    map <char,char> m;
    for(ll i=0;i<l1.size();i++)
    {
        m.insert(make_pair(l1[i],l2[i]));
    }
    for(ll i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
            ch=tolower(s[i]);
            if(islower(s[i]))
            {
                cout<<m[ch];
            }
            else
            {
                cout<<(char)toupper(m[ch]);
            }
        }
        else
            cout<<s[i];
    }
    return 0;
}
