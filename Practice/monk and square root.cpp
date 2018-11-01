#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll T,N,M,t,flag=0;
    cin>>T;
    while(T--)
    {
        cin>>N>>M;
        for(ll i=0;i<=M;i++)
        {
            t=i%M;
            t=pow(t,2);
            t=t%M;
            if(t==N)
            {
                cout<<i<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"-1"<<endl;
        flag=0;
    }
    return 0;
}
