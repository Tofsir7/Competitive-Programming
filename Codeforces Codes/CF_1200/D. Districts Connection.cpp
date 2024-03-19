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
        int n,alada,flag=1;
        cin>>n;
        int ar[n+2];
        for(int i=1; i<=n; i++)
        {
            cin>>ar[i];
            if(ar[1]!=ar[i])
            {
                alada=i;
                flag=0;
            }
        }N
        if(!flag)
        {
            cout<<"YES"<<endl;
            for(int i=2; i<=n; i++)
            {
                if(ar[i]==ar[1])
                {
                    cout<<i<<" "<<alada<<endl;
                }
                else
                    cout<<1<<" "<<i<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }
}
