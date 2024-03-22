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
        int ar[n+5],mn=1e9+2;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            mn=min(mn,ar[i]);
        }
        if(mn==ar[0])
        {
            cout<<"Bob"<<endl;
        }
        else
            cout<<"Alice"<<endl;
    }
}
