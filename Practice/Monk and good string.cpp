#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    cin>>a;
    vector<int> ans;
    int k=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            ans.push_back(1);
            for(int j=i;j<a.size();j++)
            {
                if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
                    ans[k]++;
                else
                {
                    k++;
                    break;
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans[ans.size()-1]-1;
    return 0;
}
