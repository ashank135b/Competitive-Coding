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
    string s;
    cin>>s;
    ll n=s.size();
    bool A[n]={false},B[n]={false},C[n]={false};
    for(ll i=0;i<n;i++)
    {
    	if(s[i]=='A')
    	{
    		A[i]=true;
    		if(i+1<n)
    			A[i+1]=true;
    		if(i-1>=0)
    			A[i-1]=true;
    	}
    	if(s[i]=='B')
    	{
    		B[i]=true;
    		if(i+1<n)
    			B[i+1]=true;
    		if(i-1>=0)
    			B[i-1]=true;
    	}
    	if(s[i]=='C')
    	{
    		C[i]=true;
    		if(i+1<n)
    			C[i+1]=true;
    		if(i-1>=0)
    			C[i-1]=true;
    	}
    }
    for(ll i=0;i<n;i++)
    {
    	if(A[i]&&B[i]&&C[i])
    	{
    		cout<<"Yes"<<endl;
    		return 0;
    	}
    }
    cout<<"No"<<endl;

    return 0;
}
