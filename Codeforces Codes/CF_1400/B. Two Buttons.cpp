#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l=0;
    cin>>n>>m;
    if(n>=m)
    {
     cout<<n-m<<endl;
    }
    else
    {
        while(m>n)
    {
        if(m%2==0)
           {
              l++;
              m=m/2;
           }
           else
           {
               l++;
               m++;
           }
    }
    cout<<l+(n-m)<<endl;
    }
}
 
