#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    cin>>Case;
    while(Case--)
    {
        unsigned long long int n,q,l,r,sum=0,one=0,dif;
        cin>>n>>q;
        unsigned long long int ar[n+5],br[n+5],cr[n+5];
        for(int i=0;i<n;i++)
            {
                cin>>ar[i];
                if(ar[i]==1)
                    one++;
                sum+=ar[i];
                br[i]=one;
                cr[i]=sum;
            }
        while(q--)
        {
            cin>>l>>r;
            if(l==r)
                cout<<"NO"<<endl;
            else
            {
                dif=(cr[r-1]-cr[l-1])+ar[l-1];
                if(ar[l-1]==1)
                {
                    if(dif<(r-l+1)+(br[r-1]-br[l-1]+1))
                    cout<<"NO"<<endl;
                    else
                    cout<<"YES"<<endl;
                }
                else
                {
                    if(dif<(r-l+1)+(br[r-1]-br[l-1]))
                    cout<<"NO"<<endl;
                    else
                    cout<<"YES"<<endl;
                }

            }
        }
    }
}
