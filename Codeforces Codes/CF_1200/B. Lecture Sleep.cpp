#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,theory=0,ans=0,a;
    cin>>n>>k;
    vector<int>ar;
    vector<int>br;
    int cr[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>a;
        ar.push_back(a);
    }
    for(int i=0; i<n; i++)
    {
        cin>>a;
        br.push_back(a);
    }
    int part=0;
    for(int i=n-1; i>=0; i--)
    {
        if(br[i]==0)
        {
            cr[i]=part;
            part=0;
        }
        else
        {
            cr[i]=part;
            part+=ar[i];
        }
    }
    for(int i=0;i<n;i++)
        cout<<cr[i]<<" ";
    cout<<endl;
    for(int i=0; i<k; i++)
        theory+=ar[i];
    int j=0;
    for(int i=k; i<n; i++)
    {
        if(br[j]==0)
        {
            theory-=ar[j]+cr[i];
            j++;
        }
        else
            j++;
        theory+=ar[i];
        ans=max(ans,theory+cr[i]);
    }
    cout<<ans<<endl;
}
