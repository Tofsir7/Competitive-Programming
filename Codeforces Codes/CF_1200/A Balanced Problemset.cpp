#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int n,x,ans=1;
        cin>>n>>x;
        int r=sqrt(n);
        for(int i=1; i<=r; i++)
        {
            if(n%i==0)
            {
                if(x<=n/i)
                    ans=max(ans,i);
                if(x<=i)
                    ans=max(ans,n/i);
            }
        }
        cout<<ans<<endl;

    }
}
