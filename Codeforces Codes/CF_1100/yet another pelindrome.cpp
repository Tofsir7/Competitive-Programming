#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[50010],n,flag=1;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+2;j<n;j++)
            {
                if(ar[i]==ar[j])
                {
                    cout<<"YES"<<endl;
                    flag=0;
                    break;
                }
            }
            if(!flag)
                break;
        }
        if(flag)
            cout<<"NO"<<endl;
    }
}
