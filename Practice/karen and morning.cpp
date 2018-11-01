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

int h,m;
bool check()
{
    int q1=h/10,q2=h%10,q3=m/10,q4=m%10;
    return (q1==q4&&q2==q3);
}
int main()
{
    IOS;
    string s;
    cin>>s;
    stringstream ss(s);
    char c;
    while(!ss.eof())
    {
        ss>>h>>c>>m;
    }
    int ans=0;
    while(!check())
    {
        ans++;
        if(++m==60)
        {
            m=0;
            h++;
        }
        if(h==24)
            h=0;
    }
    cout<<ans<<endl;
    return 0;
}
