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
        int n,zero=0,one=0,ans=0,flag=1;
        string s;
        cin>>n;
        cin>>s;
        ans=2*n;
        vector<int>position;
        vector<pair<int,int> >v;
        v.push_back(make_pair(zero,one));
        for(int i=1; i<=n; i++)
        {
            if(s[i-1]=='1')
                one++;
            else
                zero++;
            v.push_back(make_pair(zero,one));
        }
        if(n==zero)
        {
            cout<<n<<endl;
        }
        else if(n==one)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=0; i<=n; i++)
            {
                int zr=v[i].first;
                int on=v[i].second;
                if(zr>=(i+1)/2 && (n-i+1)/2<=one-on)
                {
                    flag=0;
                    position.push_back(i);
                }
            }
            for(int i=position.size()-1;i>=0;i--)
            {
                int prev=abs(n-2*ans);
                int cur=(n-2*position[i]);
                if(prev>=cur)
                    ans=position[i];
            }
            if(flag)
            {
                cout<<0<<endl;
            }
            else
                cout<<ans<<endl;
        }
    }

}
