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
    ll k,n;
    cin>>n>>k;
    ll a[n],b[n];
    bool visited[n];
    memset(visited,false,sizeof(visited));
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	b[i]=a[i];
    }
    sort(b,b+n);
    reverse(b,b+n);
    ll pos[k],ans=0;
    for(ll i=0;i<k;i++)
    {
    	ans+=b[i];
    	for(ll j=0;j<n;j++)
    	{
    		if(b[i]==a[j]&&!visited[j])
    		{
    			pos[i]=j;
    			visited[j]=true;
    			break;
    		}
    	}
    }
    if(k==1)
    {
    	cout<<ans<<endl;
    	cout<<n<<endl;
    	return 0;
    }
    sort(pos,pos+k);
    //for(ll i=0;i<k;i++)
    	//cout<<pos[i]<<" ";
    //cout<<endl;
    ll sz[k];
    ll s=0;
    for(ll i=0;i<k-1;i++)
    {
    	sz[i]=pos[i]-s+1;
    	s=pos[i]+1;
    }
    sz[k-1]=n-pos[k-2]-1;
    cout<<ans<<endl;
	for(ll i=0;i<k;i++)
	{
		cout<<sz[i]<<" ";
	}
	cout<<endl;

    return 0;
}