#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
       long long n,k;
       vector<int>v;
       cin>>n>>k;
       if(k>=n)
       {
           cout<<1<<endl;
       }
       else if(k==1)
       {
           cout<<n<<endl;
       }
       else
       {
           for(int i=2;i*i<=n;i++)
           {
               if(n%i==0 && i<=k && n/i<=k)
               {
                   v.push_back(n/i);
                   v.push_back(i);
               }
           }
           sort(v.begin(),v.end());
           int l=v.size();
           if(!l)
           {
               cout<<n<<endl;
           }
           else
            cout<<n/v[l-1]<<endl;
       }
    }
}
