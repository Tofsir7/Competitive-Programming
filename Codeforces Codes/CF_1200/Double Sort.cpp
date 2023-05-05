#include<bits/stdc++.h>
using namespace std;
//#define optimiz() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        //optimiz();
        vector<pair<int,int>>v;
        int ar[105],br[105],cnt=0,n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=0;i<n;i++)
            cin>>br[i];
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(ar[i]>ar[j]||br[i]>br[j])
                {
                    cnt++;
                    swap(ar[i],ar[j]);
                    swap(br[i],br[j]);
                    v.push_back(make_pair(j+1,i+1));
                }
            }
        }
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]>ar[i+1] ||br[i]>br[i+1] )
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"-1"<<endl;
        else
        {
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++)
                cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        v.clear();
    }
}
