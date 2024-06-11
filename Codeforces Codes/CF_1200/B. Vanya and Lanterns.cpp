#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    vector<ll>s;
    ll n,l,p,mini=0;
    cin>>n>>l;
    int flag=n;
    while(flag--)

    {
        cin>>p;
        s.push_back(p);
    }
    sort(s.begin(),s.end());
    int dif1=s[0];
    int dif2=l-s[n-1];
    //cout<<dif2<<endl;
    for(int i=0;i<n-1;i++)
    {
        int dif=s[i+1]-s[i];
        if(mini<dif)
            mini=dif;
    }
    double ans=(double)mini/2;
   // cout<<ans<<endl;
    if(dif1>ans)
     ans=(double)dif1;
     if(dif2>ans)
        ans=(double)dif2;

    printf("%.10lf\n",ans);
}
