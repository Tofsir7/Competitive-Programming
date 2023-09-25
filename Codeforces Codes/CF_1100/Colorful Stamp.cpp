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
        int n;
        string s;
        cin>>n;
        cin>>s;
        int r=0,b=0,flag=1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='W')
            {
                if((r==0 && b>0) || (r>0 && b==0))
                {
                    cout<<"No"<<endl;
                    flag=0;
                    break;
                }
                else
                {
                    r=0;
                    b=0;
                }
            }
            else if(s[i]=='B')
                b++;
            else
                r++;
        }
        if(((r==0 && b>0) || (r>0 && b==0)) && flag==1)
        {
            cout<<"No"<<endl;
            flag=0;
        }
        else if(flag)
            cout<<"Yes"<<endl;
    }
}
