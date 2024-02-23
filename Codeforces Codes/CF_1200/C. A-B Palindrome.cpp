#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,flag=1;
        cin>>a>>b;
        string s;
        int zero=0,one=0;
        cin>>s;
        int l=s.size();
        for(int i=0; i<l; i++)
        {
            if(s[i]=='?')
                s[i]=s[l-i-1];
            if((s[i]=='1' && s[l-1-i]=='0')||(s[i]=='1' && s[l-1-i]=='0'))
                goto next;
            if(s[i]=='1')
                one++;
            if(s[i]=='0')
                zero++;
        }
        a-=zero;
        b-=one;
        if(a<0 || b<0)
        {
            next:
            cout<<"-1"<<endl;
            flag=0;
        }
        else
        {
            int i=0;
            while(i<l-i)
            {
                if(s[i]=='?' && s[l-i-1]=='?')
                {
                    if(i==l-i-1)
                    {
                        if(a>0)
                        {
                            s[i]='0';
                            a--;
                        }
                        else if(b>0)
                        {
                            s[i]='1';
                            b--;
                        }
                        else
                        {
                            cout<<"-1"<<endl;
                            flag=0;
                            break;
                        }
                    }
                    else if(a>1 && b>1)
                    {
                        if(a>b)
                        {
                            s[i]='0';
                            s[l-i-1]='0';
                            a-=2;
                        }
                        else
                        {
                            s[i]='1';
                            s[l-i-1]='1';
                            b-=2;
                        }
                    }
                    else if(a>1)
                    {
                        s[i]='0';
                            s[l-i-1]='0';
                            a-=2;
                    }
                    else if(b>1)
                    {
                        s[i]='1';
                            s[l-i-1]='1';
                            b-=2;
                    }
                    else
                    {
                        cout<<"-1"<<endl;
                        flag=0;
                        break;
                    }
                }
                i++;
            }
            if(flag)
                cout<<s<<endl;
        }
    }
}
