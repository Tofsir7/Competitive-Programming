#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int Case;
    cin>>Case;
    while(Case--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int ar[n+5],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum<=k)
        {
            cout<<n<<endl;
        }
        else
        {
            long long int ans=0,x=0;
            for(int i=0; i<n; i++)
            {
                x+=ar[i];
                if(x<=(k+1)/2)
                {
                    ans++;
                }
                else
                    break;
            }
            // cout<<"ans="<<ans<<endl;
            x=0;
            for(int i=n-1; i>=0; i--)
            {
                x+=ar[i];
                if(x<=k/2)
                {
                    ans++;
                }
                else
                    break;
            }
            cout<<min(ans,n)<<endl;
        }

    }
}
