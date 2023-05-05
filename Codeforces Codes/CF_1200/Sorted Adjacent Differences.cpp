#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    long long int a[100010];
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int b[n+5];
        for(int k=n-1,i=0,j=n-1;i<j;)
        {
            b[k]=a[j];
            b[k-1]=a[i];
            //cout<<i<<"="<<j<<"-"<<k<<endl;
            i++;
            j--;
            k-=2;
        }
        if(n%2==1)
            b[0]=a[n/2];
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}




