#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    int a[200005];
    cin>>t;
    while(t--)
    {
        //map<int,int>mp;
        int n,mul=-1;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long int dif=1000000001;
        int l,r;
        for(int i=0; i<n-1; i++)
        {
            int val=a[i+1]-a[i];
            if(val<dif)
            {
                l=i;
                r=i+1;
                dif=val;
                //cout<<l<<"="<<r<<endl;
            }
        }
        cout<<a[l]<<" ";
        for(int i=r+1; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        for(int i=0; i<l; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[r]<<endl;
        //cout<<a[r]<<endl;
    }
}
