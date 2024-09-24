#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p,l,t,week,ans,st=0,nd,mid;
        cin>>n>>p>>l>>t;
        week=(n+6)/7;
        nd=n;
        while(st<=nd)
        {
            mid=(st+nd)/2;
            long long credit=l*mid+min(week,2*mid)*t;
            if(credit>=p)
            {
                long long Tcredit=l*(mid-1)+min(week,2*(mid-1))*t;
                if(Tcredit<p)
                {
                    ans=n-mid;
                    break;
                }
                else if(Tcredit==p)
                {
                    ans=n-mid+1;
                    break;
                }
                else
                    nd=mid-1;
            }
            else
                st=mid+1;
        }
        cout<<ans<<endl;
    }
}
