#include<bits/stdc++.h>
using namespace std;
int cnt[100010];
int total[100100];
int main()
{
    int q1[100010],v,n,q;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v);
        cnt[v]++;
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d",&q1[i]);
    }
    for(int i=1;i<100000;i++)
    {
        total[i]=total[i-1]+cnt[i];
    }
   // for(int i=0;i<n;i++)
        //cout<<total[i]<<"tottal"<<endl;
    for(int i=0;i<q;i++)
    {
        if(q1[i]>=100000)
        {
            printf("%d\n",n);
        }
        else
        {
            int flag=q1[i];
        printf("%d\n",total[flag]);
            }
    }
}
