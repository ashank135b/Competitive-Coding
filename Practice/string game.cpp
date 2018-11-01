#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool valid(string s1,string s2,int *arr,int m)
{
    int n=s1.size(),n2=s2.size();
    bool rep[200001];
    fill(rep,rep+200001,true);
    for(int i=0;i<m;i++)
        rep[arr[i]]=false;

    int i=0,j=0;
    for(int i=0;i<n;i++)
        if(s1[i]==s2[j] && rep[i])
        {

            j++;
            if(j==n2)
                break;
        }

    if(j==n2)
        return true;
    else
        return false;
}


int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int n=s1.size();
	int arr[200001];
	for(int i=0;i<n;i++)
    {
	    cin>>arr[i];
	    arr[i]--;
    }
    int l=0,r=n-1,max=0;
    while(l<=r)
    {
        int m=(l+r)/2;

        if( valid(s1,s2,arr,m) )
        {
            l=m+1;
            if(max<m)
                max=m;
        }
        else
            r=m-1;
    }
    cout<<max;
	return 0;
}
