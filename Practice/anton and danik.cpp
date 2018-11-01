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
    ll a=0,d=0,n;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton";
    else if(a<d)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}
