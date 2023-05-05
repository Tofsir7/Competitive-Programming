#include<bits/stdc++.h>
using namespace std;
//#define optimiz() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int maximum=n*n;
        int out=1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<out<<" ";
                if(out==maximum || out==maximum-1)
                    out=0;
                out+=2;
            }
            cout<<endl;
        }
    }
}

