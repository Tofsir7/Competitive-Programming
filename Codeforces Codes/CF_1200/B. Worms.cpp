#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll ar[1000010];
int main()
{
    ll n,arn,q,arq,flag=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arn;
        for(int j=1;j<=arn;j++)
        {
            flag++;
            ar[flag]=i;
        }
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>arq;
        cout<<ar[arq]<<endl;
    }
}
