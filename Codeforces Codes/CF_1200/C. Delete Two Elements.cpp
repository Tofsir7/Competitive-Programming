#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    cin>>Case;
    while(Case--)
    {
        long long n,a,sum=0,l,u,ans=0;
        vector<int>v;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            sum+=a;
        }
        double mean=(double)sum/n;
        sort(v.begin(),v.end());
        v.push_back(1e9+5);
        for(int i=0; i<n; i++)
        {
            l=lower_bound(v.begin()+i,v.end(),2*mean-v[i])-v.begin();
            u=upper_bound(v.begin()+i,v.end(),2*mean-v[i])-v.begin();
            ans+=(u-l);
            if(2*mean-v[i]==mean)
                {
                    ans--;
                    ///cout<<"yes"<<mean<<endl;
                }
            ///cout<<l<<"\t"<<u<<endl;
        }
        cout<<ans<<endl;
    }
//3 3 4 4
}

