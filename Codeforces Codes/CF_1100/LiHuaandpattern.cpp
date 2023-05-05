#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n+2][n+2];
        //int br[n+2][n+2];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>ar[i][j];
                //cout<<i<<" "<<j<<endl;;
            }
            //cout<<endl<<i<<endl;
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ar[i][j]!=ar[n-i-1][n-j-1])
                    cnt++;
            }
        }
        cnt/=2;
        //cout<<cnt<<endl;
        if(cnt<=k)
        {
            int rem=k-cnt;
            if(rem%2==0)
                cout<<"YES"<<endl;
            else
            {
                if(n%2==1)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
        else
            cout<<"NO"<<endl;

    }
}
