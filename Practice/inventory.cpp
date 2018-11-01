#include<bits/stdc++.h>
using namespace std;
#define ll long long

int num[100005]={0};

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
    {
		cin >> a[i];
		num[a[i]]++;
	}
	vector<int> v;
	for(int i=1; i<=n; i++)
    {
		if(num[i] == 0)
        {
			v.push_back(i);
		}
	}
	int index = 0;
	for(int i=0; i<n; i++)
    {
		if(a[i] > n || num[a[i]] > 1)
        {
			num[a[i]]--;
			a[i] = v[index++];
		}
		cout << a[i] << " ";
	}
	return 0;
}
