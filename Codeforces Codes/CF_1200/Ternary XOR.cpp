#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int a[50010],b[50010];
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int flag=1;
        for(int i=0; i<n; i++)
        {
            if(flag)
            {
                if(s[i]-48==1)
                {
                    a[i]=1;
                    b[i]=0;
                    flag=0;
                }
                else
                {
                    int x=s[i]-48;
                    a[i]=x/2;
                    b[i]=x/2;
                }
            }
            else
            {
                a[i]=0;
                b[i]=s[i]-48;
            }
        }
        for(int i=0; i<n; i++)
            cout<<a[i];
        cout<<endl;
        for(int i=0; i<n; i++)
            cout<<b[i];
        cout<<endl;
    }
    return 0;
}
