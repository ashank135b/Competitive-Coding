#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793

double hh,mm;
double D,N,C;

int main()
{
    IOS;
    double H,C,D,N;
    cin>>hh>>mm;
    cin>>H>>D>>C>>N;

    ll time=hh*60+mm;
    double ans=1e6;

    if(time<20*60)
    {
    	ll h1=H+(20*60-time)*D;
    	//cout<<ans<<endl;
    	ans=min(ans,ceil(H/N)*C);
    	//cout<<"1:"<<ceil(H/N)*C<<endl;
    	ans=min(ans,ceil(h1/N)*C*0.8);
    	//cout<<"2:"<<ceil(h1/N)*C*0.8<<endl;
    }
    else
    {
    	ans=ceil(H/N)*C*0.8;
    }

    cout<<fixed<<setprecision(4)<<ans<<endl;

    return 0;
}
