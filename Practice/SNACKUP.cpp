#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<bool> vb;

#define PI 3.141592653589793
#define MOD 1000000009

int main()
{
    IOS;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int r=n;
        cout<<r<<endl;
        for(int j=1;j<=r;j++)
        {
            cout<<n<<endl;
            int k=j;
            for(int i=1;i<=n;i++)
            {
                if(k<n)
                {
                    cout<<i<<" "<<k<<" "<<k+1<<endl;
                    k++;
                }
                else
                {
                    cout<<i<<" "<<k<<" "<<1<<endl;
                    k=1;
                }
            }
        }
    }
    return 0;
}
