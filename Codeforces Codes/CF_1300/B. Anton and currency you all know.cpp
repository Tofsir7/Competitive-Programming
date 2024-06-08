#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int value,x,l,flag=0;
    string s;
    cin>>s;
    l=s.size();
    value=s[l-1]-48;
    for(int i=0; i<l; i++)
    {
        x=s[i]-48;
        if(x%2==0)
        {
            if(x<value)
            {
                swap(s[i],s[l-1]);
                flag=1;
                break;
            }
        }
    }
    if(!flag)
    {
        for(int i=l-1; i>=0; i--)
        {
            x=s[i]-48;
            if(x%2==0)
            {
                swap(s[i],s[l-1]);
                flag=1;
                break;
            }
        }
    }
    if(flag)
    {
        cout<<s<<endl;
    }
    else
        cout<<-1<<endl;
}
