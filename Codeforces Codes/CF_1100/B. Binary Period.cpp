#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int one=0, zero=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                zero++;
            else if(s[i]=='1')
                one++;
            if(one==1 && zero==1)
                break;
        }
        if(one>=1 && zero>=1)
        {
            if(s[0]==1)
            {
                for(int i=0; i<s.size(); i++)
                    cout<<"01";
            }
            else
                for(int i=0; i<s.size(); i++)
                    cout<<"10";
                    //cout<<double<<endl;
        }
        else
        {
            if(one)
            {
                for(int i=0; i<s.size(); i++)
                    cout<<"11";
            }
            else
                for(int i=0; i<s.size(); i++)
                    cout<<"00";
            //cout<<"Single"<<endl;
        }
        s.clear();
        cout<<endl;

    }
}
