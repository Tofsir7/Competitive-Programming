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
        int n,m,x;
        vector<int>d;
        set<int>st;
        cin>>n>>m>>x;
        int r;
        char k;
        cin>>r>>k;
        m--;
        int c=(x+r)%n;
        int ac=(n+x-r%n)%n;
        if(!c)
            c=n;
        if(!ac)
            ac=n;
        if(k=='1')
            st.insert(ac);
        else if(k=='0')
            st.insert(c);
        else
        {
            st.insert(c);
            st.insert(ac);
        }
        while(m--)
        {
            for (auto& str : st)
                d.push_back(str);
            st.clear();
            cin>>r>>k;
            for(int i=0; i<d.size(); i++)
            {
                x=d[i];
                c=(x+r)%n;
                ac=(n+x-r%n)%n;
                if(!c)
                    c=n;
                if(!ac)
                    ac=n;
                if(k=='1')
                    st.insert(ac);
                else if(k=='0')
                    st.insert(c);
                else
                {
                    st.insert(c);
                    st.insert(ac);
                }
            }
            d.clear();
        }
        cout<<st.size()<<endl;
        for (auto& str : st)
        {
            cout << str << ' ';
        }
        cout<<endl;
    }
}
 
