#include<bits/stdc++.h>
using namespace std;
struct con
{
    int l,r;
};
bool comp(con x,con y)
{
    return (x.r<y.r);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    con t[m];
    int ans;
    for(int i=0;i<m;i++)
    {
        cin>>t[i].l>>t[i].r;
    }
    sort(t,t+m,comp);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    int index=-1;
    for(int i=0;i<m;i++)
    {
        if(sum<=t[i].r)
        {
            index=i;
            break;
        }
    }
    if(index!=-1)
    {
        if(sum<=t[index].l)
            ans=t[index].l;
        else
            ans=sum;
        cout<<ans;
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}
