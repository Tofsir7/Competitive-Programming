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
    long long int a[100010];
    long long int b[100010];
    long long int c[100010];
    long long int d[100010];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+t);
    c[0]=0;
    d[0]=0;
    c[1]=a[1];
    d[1]=b[1];
    for(int i=2;i<=t;i++)
    {
        c[i]=c[i-1]+a[i];
        d[i]=d[i-1]+b[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
       // optimiz();
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<c[r]-c[l-1]<<endl;
        }
        else
        {
            cout<<d[r]-d[l-1]<<endl;
        }
    }
}


