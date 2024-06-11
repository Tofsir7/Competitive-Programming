#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    map<char,int>m;
    cin>>s;
    for(int i=0;i<s.size();i++)
        m[s[i]]++;
    for(char i='a';i<='z';i++)
    {
        if(m[i]%2)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
