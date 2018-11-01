#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n,m;
	cin>>n>>m;
	while(m--)
	{
	    int k;
	    cin>>k;

	    bool rick[10001]={false},morty[10001]={false};
        for(int i=0;i<k;i++)
        {
            int t;
            cin>>t;
            if(t>0) morty[t]=true;
            else rick[-t]=true;
        }

        bool flag=false;
        for(int i=1;i<10001;i++)
            if(rick[i]==true && morty[i]==true)
                flag=true;

	    if(!flag)
        {
            cout<<"YES";
            return 0;
        }
	}
	cout<<"NO";
	return 0;
}
