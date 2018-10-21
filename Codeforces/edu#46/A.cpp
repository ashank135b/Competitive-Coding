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
    string a[n],b[n];
    for(ll i=0;i<n;i++)
    	cin>>a[i];
    for(ll i=0;i<n;i++)
    	cin>>b[i];
    bool visited[n]={false};
    ll ans=n;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(!visited[j]&&a[i]==b[j])
            {
                ans--;
                visited[j]=true;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
