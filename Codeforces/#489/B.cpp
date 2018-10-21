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

ll l,r;

ll totalPrimeFactors(ll n)
{
    ll count = 0;
 
    if (!(n%2))
    {
    	if(l<=2)
        	count++;
        while (!(n%2))
            n /= 2;
    }

    for (ll i = l; i*i <= r && i*i <= n; i = i+2)
    {
        if (!(n%i))
        {
            count++;
            while (!(n%i))
                n /= i;
        }
    }
 

    if (n > 2&&n>=l&&n<=r)
        count++;
 
    return count;
}

ll countPairs(ll G, ll L)
{
    if (L % G != 0)
       return 0;
 
    ll div = L/G;
    return (1 << totalPrimeFactors(div));
}

int main()
{
    IOS;
    ll x,y;
    cin>>l>>r>>x>>y;
    ll prod=x*y;
    ll ans=0;
    cout<<countPairs(x,y)<<endl;

    return 0;
}


    /*
    set<ll> s;

    if(l==1&&y<=r)
    {
    	ans+=2;
    }

    for(ll i=2;i*i<=prod;i++)
    {
    	if(prod%i==0)
    	{
    		for(ll j=i;j<prod;j+=i)
    		{
    			if(prod%j==0)
    			{
    				ll k=prod/j;
    				if((j>=l&&j<=r)&&(k>=l&&k<=r))
    				{
    					if(__gcd(j,k)==x&&(s.find(j)==s.end()&&s.find(k)==s.end()))
    					{
    						//cout<<j<<" "<<k<<endl;
    						s.insert(j);
    						s.insert(k);
    						ans+=2;
    						if(j==k)
    							ans--;

    					}
    				}
    			}
    		}
    	}
    }
	

    cout<<ans<<endl;
    return 0;
}
*/