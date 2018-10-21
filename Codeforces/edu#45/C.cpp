#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 1000000009

int main()
{
    IOS;
    ll n;
    cin>>n;
    string s[n];
    for(ll i=0;i<n;i++)
    	cin>>s[i];
    //stack<char> st[n];
    vll left,right;
    ll l[n],r[n];
    memset(l,0,sizeof(l));
    memset(r,0,sizeof(r));
    for(ll i=0;i<n;i++)
    {
    	for(ll j=0;j<s[i].size();j++)
    	{
    		char ch=s[i][j];
    		if(ch=='(')
    		{
    			l[i]++;
    		}
    		else
    		{
    			if(l[i]!=0)
    				l[i]--;
    			else
    				r[i]++;
    		}
    	}
        if(r[i]==0)
            left.pb(l[i]);
        if(l[i]==0)
            right.pb(r[i]);
    }
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    ll ans=0;
    /*cout<<"------"<<endl;
    for(ll i=0;i<left.size();i++)
        cout<<left[i]<<endl;
    cout<<"------"<<endl;
    for(ll i=0;i<right.size();i++)
        cout<<right[i]<<endl;
    */
    for (ll i=0;i<n;i++)
    {
        if(l[i]==0)
        {
            ll low=lower_bound(left.begin(),left.end(),r[i])-left.begin();
            ll high=upper_bound(left.begin(),left.end(),r[i])-left.begin();
            //cout<<s[i]<<" left"<<endl;
            //cout<<low<<":"<<high<<endl;
            ans+=high-low;
        }
        if(r[i]==0)
        {
            ll low=lower_bound(right.begin(),right.end(),l[i])-right.begin();
            ll high=upper_bound(right.begin(),right.end(),l[i])-right.begin();
            //cout<<s[i]<<" right"<<endl;
            //cout<<low<<":"<<high<<endl;
            ans+=high-low;
        }

    }
    
    cout<<ans/2<<endl;
    return 0;
}
