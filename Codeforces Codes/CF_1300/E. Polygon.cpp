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
        int n;
        vector<string>v;
        string s;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            v.push_back(s);
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if(v[i][j]=='1')
                {
                    if(v[i][j+1]=='1'||v[i+1][j]=='1') continue;
                    else
                    {
                        cout<<"NO"<<endl;
                        goto done;
                    }
                }
            }
        }
        cout<<"YES"<<endl;
done:
        bool finish=true;
    }
}
