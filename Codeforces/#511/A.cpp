#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 200005

int main()
{
    IOS;
    ll n;
    cin>>n;
    cout<<1<<" ";
    if(n==3)
    {
    	cout<<1<<" "<<1<<endl;
    	return 0;
    }
    ll b=1,c=n-2;
    if(c%3==0)
    {
    	c--;
    	b++;
    }
    cout<<b<<" "<<c<<endl;
    return 0;
}
