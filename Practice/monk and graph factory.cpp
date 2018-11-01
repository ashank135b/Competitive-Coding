#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,sum=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum==2*(n-1))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
