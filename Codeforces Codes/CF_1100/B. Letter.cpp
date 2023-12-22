#include<bits/stdc++.h>
using namespace std;
int main()
{
    string h1,h2;
    getline(cin,h1);
    getline(cin,h2);
    int l=h1.size();
    vector<char>v;
    map<char,int>mp;
    for(int i=0; i<l; i++)
    {
        if(!isspace(h1[i]))
        {
            char c=h1[i];
            mp[c]++;
            v.push_back(c);
        }
    }
    for(int i=0; i<h2.size(); i++)
    {
        if(!isspace(h2[i]))
        {
            char c1=h2[i];
            if(mp[c1]>0)
                mp[c1]--;
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
}
