#include<bits/stdc++.h>
using namespace std;
#define ll long long
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return 1;

        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);

        return binarySearch(arr, mid+1, r, x);
   }
    return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(binarySearch(a,1,n,a[i]+k)==1)
            c++;
    }
    cout<<c;
    return 0;
}
