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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    a--;
    b--;
    c--;
    d--;
    cout<<"50 50"<<endl;
    char A[50][50];
    for(ll i=0;i<50;i++)
    {
    	for(ll j=0;j<50;j++)
    	{
    		if(i<25&&j<25)
    		{
    			A[i][j]='A';
    			if(i%2==0&&j%2==0&&d>0)
    			{
    				A[i][j]='D';
    				d--;
    			}
    		}
    		if(i>=25&&j<25)
    		{
    			A[i][j]='B';
    			if(i%2==0&&j%2==0&&c>0)
    			{
    				A[i][j]='C';
    				c--;
    			}
    		}
    		if(i<25&&j>=25)
    		{
    			A[i][j]='C';
    			if(i%2==0&&j%2==0&&b>0)
    			{
    				A[i][j]='B';
    				b--;
    			}
    		}
    		if(i>=25&&j>=25)
    		{
    			A[i][j]='D';
    			if(i%2==0&&j%2==0&&a>0)
    			{
    				A[i][j]='A';
    				a--;
    			}
    		}
    	}
    }

    for(ll i=0;i<50;i++)
    {
    	for(ll j=0;j<50;j++)
    	{
    		cout<<A[i][j];
    	}
    	cout<<endl;
    }
    
    return 0;
}
