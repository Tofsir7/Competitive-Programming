#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    string s;
    vector<string>v;
    for(int i=0; i<n; i++)
    {
        //string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(v[i][j]=='.')
            {
                if((i+j)%2==0)
                    v[i][j]='B';
                else
                    v[i][j]='W';
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
}


