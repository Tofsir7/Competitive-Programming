#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,l=1,w,t,r;
  cin>>t;
  while(t--)
  {
    r=0;
    cin>>n>>w;
    if(n<=l)
    {
        cout<<1<<endl;
        continue;
    }
    if(n<=w)
    {
        w=n-1;
        r=1;
    }
    cout<<(r+((l+w)*(w-l+1))/2)<<endl;
  }
}
