#include<bits/stdc++.h>
using namespace std;

#define max(a,b) (a=a>b?a:b);
int main()
{
	long long n;
	cin>>n;

	long long a[n];

	for(long long i=0;i<n;i++)
		cin>>a[i];

	long long maxi=1,count=1; 

	for(long long i=0;i<n-1;i++)
	{
		if (a[i+1]<2*a[i])
		{
			count++;
			max(maxi,count);
		}

		else
		{
			count=1;
		}
	}

	cout<<maxi;
	return 0;
}