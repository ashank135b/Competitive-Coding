#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct activity
{
    int m,n;
};
bool comp(activity x,activity y)
{
    return (x.n<y.n);
}
int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        activity a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i].m>>a[i].n;
        }
        int ans=0;
        sort(a,a+N,comp);
        int i=0;
        for(int j=1;i<N;j++)
        {
            if(a[j].m>=a[i].n)
            {
                ans++;
                i=j;
            }
        }
        cout<<ans<<endl;
    }
}
