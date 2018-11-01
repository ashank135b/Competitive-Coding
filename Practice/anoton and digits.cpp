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
    ll k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    ll n1=0,n2=0;
    while(k2>0&&k5>0&&k6>0)
    {
        n1++;
        k2--;
        k5--;
        k6--;
    }
    while(k3>0&&k2>0)
    {
        n2++;
        k3--;
        k2--;
    }
    cout<<n1*256+n2*32;
    return 0;
}
