#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    deque<char>st;
    for(int i=0; i<l; i++)
    {
        if(s[i]=='B' && !st.empty())
            st.pop_back();
        if(s[i]!='B')
            st.push_back(s[i]);
    }
    while(!st.empty())
    {
        cout<<st.front();
        st.pop_front();
    }
    cout<<endl;
}
