#include<bits/stdc++.h>
using namespace std;
void sieve(int N)
{
    bool isPrime[N+1];
    int ans=0;
    for(int i = 0; i <= N;++i)
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i)
    {
         if(isPrime[i] == true)
        {
             for(int j = i * i; j <= N ;j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for(int i=2;i*i<=N;++i)
    {
        if(isPrime[i]==true)
            for(int j=i*i;j<=N;j=j*i)
            {
                isPrime[j]=true;
            }
    }
    for(int i=2;i<=N;i++)
    {
        if(isPrime[i]==true)
            ans++;
    }
    cout<<ans<<endl;
    for(int i=2;i<=N;i++)
    {
        if(isPrime[i]==true)
            cout<<i<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
