#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int a[25];
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]-48==9 && i==0)
        a[i]=9;
        else if(s[i]-48<5)
            a[i]=s[i]-48;
        else
            a[i]=57-s[i];

    }
    for(int i=0;i<s.size();i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}
