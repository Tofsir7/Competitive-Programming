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
        int n,flag=1;
        cin>>n;
        int ar[n+3],br[n+3];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        ar[0]=1; ar[n+1]=1;
        for(int i=1;i<=n+1;i++)
        {
            br[i-1]=(ar[i]*ar[i-1])/__gcd(ar[i],ar[i-1]);
        }
        for(int i=0;i<n;i++)
        {
            if(__gcd(br[i],br[i+1])!=ar[i+1])
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
    }
}
