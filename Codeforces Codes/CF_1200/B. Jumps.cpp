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
        long long int x;
        cin>>x;
        long long int i=1;
        while((1+i)*i/2<x)
        {
            i++;
        }
        if(x+1==(1+i)*i/2)
            cout<<i+1<<endl;
        else
        cout<<i<<endl;
    }
}
