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
        string s;
        cin>>s;
        long long int n=s.size();
        long long int ar[n+2];
        for(int i=0;i<=n;i++)
            ar[i]=0;
        long long int res=0,f=100,sum=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='+')
            {
                res++;
            }
            else
            {
                res--;
            }
            if(res<f)
                f=res;
        if(ar[res*-1]==0 && res<0)
            {
                ar[res*-1]=i+1;
            }
        }
        if(n==res)
        {
            cout<<n<<endl;
        }
        else if(n==-1*res)
        {
            cout<<(n*n+3*n)/2<<endl;
        }
        else
        {
            for(int i=1;i<=-1*f;i++)
            sum+=ar[i];
            sum+=n;
            cout<<sum<<endl;
        }
    }
}
