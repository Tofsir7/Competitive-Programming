#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int pos1=-1,pos2=-1,pos3=-1;
        int ans=200001;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]-48==1)
            {
                pos1=i;
            }
            else if(s[i]-48==2)
            {
                pos2=i;
            }
            else
            {
                pos3=i;
            }
            if(pos1>=0&&pos2>=0&&pos3>=0)
            {
                int p_ans=max({pos1,pos2,pos3})-min({pos1,pos2,pos3})+1;
                 ans=min(ans,p_ans);
            }
        }
        if(ans==200001)
            cout<<0<<endl;
        else
        cout<<ans<<endl;
    }
}
