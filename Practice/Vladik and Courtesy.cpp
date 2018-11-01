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
    ll a,b;
    cin>>a>>b;
    ll x=sqrt(a);
    x=x*x+x;
    if(x>b)
        cout<<"Valera";
    else
        cout<<"Vladik";
    return 0;
}
