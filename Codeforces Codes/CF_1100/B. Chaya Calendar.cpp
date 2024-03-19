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
        int ar[n+5],y=0,mul=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n;i++)
        {
            //cout<<"y="<<y<<"  "<<i<<endl;
            if(y<ar[i])
                y=ar[i];
            else
            {
                mul=ar[i];
                ar[i]=y/mul*ar[i];
                while(y>=ar[i])
                    ar[i]+=mul;
                y=ar[i];
            }
        }
        cout<<y<<endl;
    }

}
