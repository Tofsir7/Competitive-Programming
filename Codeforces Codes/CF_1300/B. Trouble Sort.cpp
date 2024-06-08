#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int Tcase;
    cin>>Tcase;
    while(Tcase--)
    {
        int n;
        cin>>n;
        int ar[n+2],b,sum=0;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=0;i<n;i++)
        {
            cin>>b;
            sum+=b;
        }
        bool isSorted=true;
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]>ar[i+1])
                isSorted=false;
        }
        if((sum==0 || sum==n)&& !isSorted)
            {
                cout<<"NO"<<endl;
            }
        else
            cout<<"YES"<<endl;
    }
}

