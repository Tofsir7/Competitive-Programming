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
        int n,yes=0;
        cin>>n;
        unordered_set<string>st;
        vector<string>v;
        string s;
        for(auto i=0; i<n; i++)
        {
            cin>>s;
            v.push_back(s);
            st.insert(s);
        }
        for(auto i=0; i<n; i++)
        {
            int l=v[i].size();
            for(auto j=1; j<l; j++)
            {
                string a,b;
                a=v[i].substr(0,j);
                b=v[i].substr(j,l-j);
                if(st.find(a)!=st.end()&&st.find(b)!=st.end())
                {
                    yes=1;
                    break;
                }
            }
            if(yes)
                cout<<1;
            else
                cout<<0;
            yes=0;
        }
        cout<<endl;

    }
    return 0;
}

