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
        int n,m,jhamela=0;
        cin>>n;
        vector<int>ar(n),br(n);
        map<int,int>freq;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=0;i<n;i++)
            cin>>br[i];
        cin>>m;
        vector<int>dr(m);
        for(int i=0;i<m;i++)
            {
                cin>>dr[i];
                freq[dr[i]]++;
            }
            int x=dr[m-1];
            sort(dr.begin(),dr.end());
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=br[i])
            {
                bool p=binary_search(dr.begin(),dr.end(),br[i]);
                if(freq[br[i]]>0 && p )
                    {
                        freq[br[i]]--;
                        continue;
                    }
                else
                {
                    //cout<<"i="<<i<<" "<<p<<endl;
                    jhamela=1;
                    break;
                }
            }
        }
        sort(br.begin(),br.end());
        bool p=binary_search(br.begin(),br.end(),x);
        if(jhamela|| !p)
        {
           // cout<<p<<endl;
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
}
