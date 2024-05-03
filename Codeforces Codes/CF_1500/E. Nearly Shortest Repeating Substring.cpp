
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ar[n],j=0,cnt=0;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                ar[j++]=i;
                ar[j++]=n/i;
            }
        }
        sort(ar,ar+j);
        int ans=n;
        int flag=1;
        for(int i=0;i<j;i++)
        {
            int k=0,cnt=0,flag=1;
            for(int j=0;j<n;j++)
            {
                if(s[j]!=s[k])
                {
                    cnt++;
                    if(cnt>1)
                    {
                        flag=0;
                        break;
                    }
                }
                k++;
                if(k==ar[i])
                    k=0;
            }
            if(flag)
            {
                ans=min(ans,ar[i]);
            }
        }
        flag=1;
        //cnt=0;
        for(int i=0;i<j;i++)
        {
            int k=1,cnt=0,flag=1;
            for(int j=n-1;j>=0;j--)
            {
                if(s[j]!=s[n-k])
                {
                    cnt++;
                    if(cnt>1)
                    {
                        flag=0;
                        break;
                    }
                }
                k++;
                if(k>ar[i])
                    k=1;
            }
            if(flag)
            {
                ans=min(ans,ar[i]);
            }
        }
        cout<<ans<<endl;
    }
}

 
