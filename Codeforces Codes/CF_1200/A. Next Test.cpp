#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+5];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    sort(ar,ar+n);
    for(int i=1;i<=n;i++)
    {
        if(ar[i-1]!=i)
        {
           cout<<i<<endl;
           goto x;
        }
   }
   cout<<n+1<<endl;
   x:
   return 0;

}
