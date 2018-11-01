#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

     int n;
     cin>>n;
     int a[n];

     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a,a+n);
     int ans=n;
      int pt=n/2;

    for(int i=0;i<n/2;i++)
	{
		for(;;)
		{
			if(a[i]*2<=a[pt])
			{
				ans--;
				pt++;
				break;
			}
			else
			{
				pt++;
			}
			if(pt==n)
			{
				break;
			}
		}
		if(pt==n)
		{
			break;
		}
	}
	cout<<ans;
	return 0;
}
