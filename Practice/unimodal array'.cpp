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
    ll n,inc=0,dec=0,cons=0;
    cin>>n;
    vll v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(ll i=1;i<n;i++)
    {
        if(v[i]>v[i-1]&&dec==0&&cons==0)
            inc++;
        else if(v[i]>v[i-1]&&(dec!=0||cons!=0))
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else if(v[i]==v[i-1]&&dec==0)
            cons++;
        else if(v[i]==v[i-1]&&dec!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else if(v[i]<v[i-1])
            dec++;
    }
    //cout<<inc<<" "<<cons<<" "<<dec<<endl;
    cout<<"YES"<<endl;
    return 0;
}
