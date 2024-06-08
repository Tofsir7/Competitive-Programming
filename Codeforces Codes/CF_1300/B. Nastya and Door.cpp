#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Tcase;
    cin>>Tcase;
    while(Tcase--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n+2],cnt=0,mx=-1,ans=1;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=1;i<k-1;i++)
        {
            if(ar[i]>ar[i-1] && ar[i]>ar[i+1])
                {
                    cnt++;
                    if(mx<=cnt)
                    {
                        mx=cnt;
                       // cout<<"increase at="<<i<<endl;
                    }
                }
        }
        for(int i=k-1;i<n-1;i++)
        {
            if(ar[i-k+2]>ar[i-k+1] && ar[i-k+2]>ar[i-k+3])
            {
                cnt--;
            }
            if(ar[i]>ar[i-1] && ar[i]>ar[i+1])
                {
                    cnt++;
                    if(mx<cnt)
                    {
                        ans=i-k+3;
                        mx=cnt;
                       // cout<<"increase at="<<i<<endl;
                    }
                }
        }



        /*
        for(int i=n-2;i>n-k;i--)
        {
            if(ar[i]>ar[i-1] && ar[i]>ar[i+1])
                {
                    cnt++;
                    if(mx<=cnt)
                    {
                        ans=i-k;
                        mx=cnt;
                       // cout<<"increase at="<<i<<endl;
                    }
                }
        }
        for(int i=n-k;i>0;i--)
        {
            if(ar[i+k]>ar[i+k+1] && ar[i+k]>ar[i+k-1])
            {
                cnt--;
            }
            if(ar[i]>ar[i-1] && ar[i]>ar[i+1])
                {
                    cnt++;
                    if(mx<=cnt)
                    {
                        ans=i-1;
                        mx=cnt;
                        //cout<<"increase at="<<i<<endl;
                    }
                }
        }*/
        cout<<mx+1<<" "<<ans<<endl;
    }
}
