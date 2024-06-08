#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Tcase;
    cin>>Tcase;
    while(Tcase--)
    {
        int n,mn=1e9+1;
        cin>>n;
        int ar[n+2];
        vector<int>br;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            mn=min(ar[i],mn);
        }
        //cout<<mn<<endl;
        for(int i=0;i<n;i++)
        {
            if(ar[i]%mn==0)
            {
               // cout<<ar[i]<<endl;
                br.push_back(ar[i]);
            }
        }
        sort(br.begin(),br.end());
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]%mn==0)
            {
                ar[i]=br[j];
                j++;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]>ar[i+1])
            {
                cout<<"NO"<<endl;
                goto next;
            }
        }
        cout<<"YES"<<endl;
        next:
            bool finish=true;

           // cout<<br.size()<<endl;*/
    }
}
