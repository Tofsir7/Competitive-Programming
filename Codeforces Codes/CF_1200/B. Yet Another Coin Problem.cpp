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
        int n,total,ans=1e9+5;
        cin>>n;
        for(int i=0;i<3;i++)
        {
            total=0;
            for(int j=0;j<2;j++)
            {
                for(int k=0;k<5;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        total=i+j*3+k*6+l*10;
                        if((n-total)%15==0 && total<=n)
                        {
                            total=i+j+k+l+(n-total)/15;
                            ans=min(ans,total);
                            ///cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
