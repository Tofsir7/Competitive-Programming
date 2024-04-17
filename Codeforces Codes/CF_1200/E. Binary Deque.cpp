#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    cin>>Case;
    while(Case--)
    {
        int n,s;
        cin>>n>>s;
        int ar[n+2],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum<s)
        {
            cout<<-1<<endl;
        }
        else if(sum==s)
        {
            cout<<0<<endl;
        }
        else
        {
            int left[n+2],right[n+2];
            int j=1;
            left[0]=0;
            for(int i=0;i<n;i++)
            {
                if(ar[i]==1)
                left[j++]=i+1;
            }
            j=1;
            right[0]=0;
            for(int i=n-1;i>=0;i--)
            {
                if(ar[i]==1)
                right[j++]=n-i;
            }
            int dif=sum-s,ans=n;
            for(int i=0;i<=dif;i++)
            {
                //cout<<left[i]<<"\t"<<right[i]<<endl;
                ans=min(left[i]+right[dif-i],ans);
            }
            cout<<ans<<endl;
        }
    }
}


