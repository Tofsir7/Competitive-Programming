#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,n2,n4,n0,p3;
        cin>>n;
        long long int ar[n+5],ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        p3=ar[n-1]*ar[n-2]*ar[n-3];
        n0=ar[n-1]*ar[n-2]*ar[n-3]*ar[n-4]*ar[n-5];
        n2=ar[0]*ar[1];
        n4=ar[2]*ar[3]*n2;
        if(ar[n-1]>0)
        {
            cout<<max(n2*p3,max(n4*ar[n-1],n0))<<endl;
            /*if(p3*n2>n4*ar[n-1])
                cout<<p3*n2<<"sss"<<endl;
            else
                cout<<n4*ar[n-1]<<"ssss"<<endl;*/

        }
        else
        {
            cout<<n0<<endl;
        }
        //cout<<ans<<endl;
    }
}

