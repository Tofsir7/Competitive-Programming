#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n%2 && n>1)
        {
            cout<<-1<<endl;
        }
        else
        {
            long long int ar[n+5],br[n+5],sum=n;
            int a=0,b=n-1;
            for(int i=0; i<n; i++)
            {
                if(i%2==0)
                {
                    ar[i]=a;
                    a++;
                }
                else
                {
                    ar[i]=b;
                    b--;
                }
            }
            br[0]=n;
            for(int i=1;i<n;i++)
            {
                int res=sum%n;
                if(res<ar[i])
                {
                    br[i]=ar[i]-res;
                    sum+=br[i];
                }
                else
                {
                    br[i]=n-res+ar[i];
                    sum+=br[i];
                }
            }
            for(int i=0;i<n;i++)
                cout<<br[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}

