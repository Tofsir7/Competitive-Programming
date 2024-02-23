#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int ar[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        long long int c=ar[0]-1;
        for(int i=1;i<n;i++)
        {
            int dif=ar[i]-ar[i-1];
            c+=max(0,dif);
        }
        cout<<c<<endl;
    }
}

