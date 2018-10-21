#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1000000009

int main()
{
    IOS;
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    ll freq[2][2]={0};
    for(ll i=0;i<n;i++)
    {
    	freq[a[i]-'0'][b[i]-'0']++;
    }
    cout<<freq[0][0]*(freq[1][0]+freq[1][1])+freq[1][0]*(freq[0][1])<<endl;
    return 0;
}
