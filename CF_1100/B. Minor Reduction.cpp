#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        //map<int,int>mp;
        cin>>s;
        int flag=0;
        for(int i=s.size()-1;i>0;i--)
        {
            int sum=s[i]+s[i-1]-96;
            if(sum>9)
            {
                s[i]=(sum%10)+48;
                s[i-1]=(sum/10)+48;
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<s<<endl;
        else
        {
            cout<<(s[0]+s[1]-96)%10;
            for(int i=2;i<s.size();i++)
            cout<<s[i];
            cout<<endl;
        }
    }
}
