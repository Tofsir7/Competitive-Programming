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
        int f=1;
        vector<int>v;
        string ss,s;
        cin>>s>>ss;
        int i=s.size()-1;
        int j=ss.size()-1;
        while(j>-1)
        {
            int x,y;
            x=ss[j]-48;
            if(i>=0)
                y=s[i]-48;
            else
                y=0;
            if(x<y)
            {
                ///cout<<"xy"<<x<<' '<<y<<endl;
                j--;
                if(j<i)
                {
                    cout<<-1<<endl;///" "<<j<<" "<<i<<endl;
                    goto ageBar;
                }
                if(ss[j]!='1')
                {
                    cout<<-1<<endl;
                    goto ageBar;
                }
                else
                {
                    x+=10;
                    if(x-y)
                    {
                        v.push_back(x-y);
                        ///cout<<"in"<<x-y<<endl;;
                    }
                }
            }
            else
            {
                v.push_back(x-y);
                ///cout<<"xyx"<<x<<' '<<y<<"in"<<x-y<<endl;
            }
            j--;
            i--;
        }
        ///cout<<endl;
        for(int i=v.size()-1; i>=0; i--)
            {
                if(f && v[i]==0)
                {
                    continue;
                }
                else
                {
                    f=0;
                    cout<<v[i];
                }

            }
        cout<<endl;
ageBar:
        bool okay=true;
    }

}

