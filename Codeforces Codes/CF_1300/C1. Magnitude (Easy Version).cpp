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
        long long mx[n+2],mn[n+2],ar[n+2];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        mn[0]=ar[0],mx[0]=abs(ar[0]);
        for(int i=1;i<n;i++)
        {
            mn[i]=mn[i-1]+ar[i];
            long long m=max(mx[i-1]+ar[i],abs(mx[i-1]+ar[i]));
            long long mm=max(mn[i-1]+ar[i],abs(mn[i-1]+ar[i]));
            mx[i]=max(m,mm);
        }
        cout<<max(abs(mn[n-1]),abs(mx[n-1]))<<endl;
    }
}
