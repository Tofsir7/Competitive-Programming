#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
long long int a[1000010]={0};
int main()
{
    long long int i,j,k,t,n;
    for(i=2;i*i<1000000;i++)
    {
    if(a[i]==0)
        {
        for(j=i*2;j<=1000000;j=j+i)
            {
                a[j]=1;
            }
    }
}
    cin>>t;
    a[0]=1;
    a[1]=1;
    while(t--)
    {
    cin>>n;
       k=sqrt(n)+0.0000001;
        //printf("%d",k);
        if(k*k==n)
        {
        if(a[k]==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
            }
        else
    cout<<"NO"<<endl;
}
    return 0;
}
