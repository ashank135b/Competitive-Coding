#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T,n;
    cin>>T;
    int a[20][20];
    while(T--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int p=0;p<=i;p++)
                {

                    for(int q=0;q<=j;q++)
                    {
                        if(a[p][q]>a[i][j])
                            ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
