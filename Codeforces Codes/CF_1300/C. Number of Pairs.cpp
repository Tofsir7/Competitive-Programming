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
        long long int n,l,r,a,ans=0;
        cin>>n>>l>>r;
        vector<int>ar;
        for(int i=0; i<n; i++)
        {
            cin>>a,ar.push_back(a);
        }
        sort(ar.begin(),ar.end());
        for(int i=0; i<n; i++)
        {
            ans+=upper_bound(ar.begin(),ar.end(),r-ar[i])-ar.begin();
            ans-=lower_bound(ar.begin(),ar.end(),l-ar[i])-ar.begin();
            if(ar[i]*2>=l && ar[i]*2<=r)
                ans--;
        }
        cout<<ans/2<<endl;
    }
}


