#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        string s1,s2;
        int first=0,second=0,flag;
        cin>>s1>>s2;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]<s2[i])
            {
                first=1;
                flag=i;
                break;
            }
            else if(s1[i]>s2[i])
            {
                second=1;
                flag=i;
                break;;
            }
        }
        if(!first && !second)
        {
            cout<<s1<<endl;
            cout<<s2<<endl;
        }
        else
        {
            if(first)
            {
                for(int i=flag+1;i<s1.size();i++)
                {
                    if(s1[i]<s2[i])
                    {
                        swap(s1[i],s2[i]);
                    }
                }
            }
            else
            {
                for(int i=flag+1;i<s1.size();i++)
                {
                    if(s1[i]>s2[i])
                    {
                        swap(s1[i],s2[i]);
                    }
                }
            }
            cout<<s1<<endl;
            cout<<s2<<endl;
        }
    }
}

