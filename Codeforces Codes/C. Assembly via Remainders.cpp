#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int ar[n+2], br[n+5];
       for(int i=0;i<n-1;i++)
        cin>>ar[i];
        br[n-1]=1e9;
        for(int i=n-2;i>=0;i--)
        {
            br[i]=br[i+1]-ar[i];
        }
        for(int i=0;i<n;i++)
            cout<<br[i]<<" ";
        cout<<endl;
    }
}
