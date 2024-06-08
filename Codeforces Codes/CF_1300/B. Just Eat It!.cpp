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
        int n,status=true;
        cin>>n;
        long long suf=0,test[n+2];
        for(int i=0;i<n;i++)
        {
            cin>>test[i];
            suf+=test[i];
            if(suf<=0)
            {
                status=false;
            }
        }
        suf=0;
        for(int i=n-1;i>=0;i--)
        {
            suf+=test[i];
            if(suf<=0)
            {
                status=false;
                break;
            }
        }
         if(status)
         {
             cout<<"YES"<<endl;
         }
         else
            cout<<"NO"<<endl;
    }
}
