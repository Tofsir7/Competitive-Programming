#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    int ar[200005];
    cin>>t;
    while(t--)
    {
        unsigned long long int alice=0,bob=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        int a=1,b=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a)
            {
                if(ar[i]%2==0)
                    alice+=ar[i];
                b=1;a=0;
            }
            else if(b)
            {
                if(ar[i]%2==1)
                    bob+=ar[i];
                b=0;a=1;
            }
        }
        if(alice>bob)
            cout<<"Alice"<<endl;
        else if(bob>alice)
            cout<<"Bob"<<endl;
        else
            cout<<"Tie"<<endl;
    }
}






