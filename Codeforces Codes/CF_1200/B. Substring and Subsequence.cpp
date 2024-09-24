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
        string s,ss;
        cin>>s>>ss;
        int ans=0,anss=0,pos=0,flag=0;
        for(int i=0; i<ss.size(); i++)
        {
            int j=i;
            for(int k=0; k<s.size(); k++)
            {
                if(ss[j]==s[k] && j<ss.size())
                    j++;
            }
            ans=max(ans,j-i);

        }
        cout<<ss.size()+s.size()-ans<<endl;
    }
}
