#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[55],cnt=0,maxi=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int sum=a[0]+a[1];
        long long int max_s=a[n-1]*2;
        for(int i=sum;i<=max_s;i++)
        {
            //cout<<"i="<<i<<" "<<max_s<<endl;
            cnt=0;
            for(int j=0,k=n-1;j<k;)
            {
                //cout<<a[j]<<"="<<a[k]<<endl;
                if(a[j]+a[k]==i)
                {
                    cnt++;
                    j++;
                    k--;
                    //cout<<"matched"<<endl;
                }
                else if(a[j]+a[k]>i)
                    k--;
                else
                    j++;
            }
            //cout<<"count"<<cnt<<endl;
            maxi=max(maxi,cnt);
        }
        cout<<maxi<<endl;
    }
}
