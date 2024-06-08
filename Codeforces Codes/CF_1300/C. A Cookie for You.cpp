#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        unsigned long long a,b,n,m;
        cin>>a>>b>>n>>m;
        if(a+b<n+m)
        {
            cout<<"NO"<<endl;
        }
        else if(min(a,b)<m)
        {
             cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
}
