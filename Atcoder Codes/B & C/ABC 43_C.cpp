#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,mn=INT_MAX;
    cin>>n;
    int ar[n+2];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    for(int i=-100;i<=100;i++)
    {
        x=0;
        for(int j=0;j<n;j++)
        {
            x+=(i-ar[j])*(i-ar[j]);
        }
        mn=min(x,mn);
    }
    cout<<mn<<endl;
}
