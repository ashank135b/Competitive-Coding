#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    v[0]=2;
    for(int i=1;i<n;i++)
        v[i]=v[i-1]+1;
    int k=1,a[n];
    bool isPrime[n+2];
    for(int i=0;i<n;i++)
        a[i]=1;
    for(int i = 0; i <= n+2;++i)
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= n+2; ++i)
    {
        if(isPrime[i] == true)
        {
             // Mark all the multiples of i as composite numbers
            for(int j = i * i; j <= n+2 ;j += i)
            {
                isPrime[j] = false;
                a[j-2]=2;
            }
         }
    }
    a[0]=1;
    if(n==1||n==2)
        cout<<"1"<<endl;
    else
        cout<<"2"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
