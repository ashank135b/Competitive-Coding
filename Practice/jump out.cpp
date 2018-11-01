#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=n-i)
        {
            cout<<(i+1);
            break;
        }
    }
    return 0;
}
