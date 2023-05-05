#include<bits/stdc++.h>
using namespace std;
//#define optimiz() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        //optimiz();
        int n;
        string s;
        cin>>n;
        cin>>s;
        int zero=-1,one=-1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1' && one==-1)
                one=i;
            else if(s[i]=='0')
                zero=i;
        }
        if(one>zero ||zero==-1||one==-1)
            cout<<s<<endl;//"=s"<<endl;
        else
        {
             for(int i=0;i<one;i++)
                cout<<s[i];
             for(int i=zero;i<n;i++)
                cout<<s[i];
             cout<<endl;
        }
    }
}
