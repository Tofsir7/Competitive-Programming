#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int n,cnt=0;
        string a,b;
        cin>>n;
        cin>>a;
        cin>>b;
        for(int i=n-1; i>=0; i--)
        {
            if(b[i]!=a[i])
            {
                if(a[0]==b[i])
                {
                    v.push_back(1);
                    v.push_back(i+1);
                    cnt+=2;
                    if(a[0]=='0')
                    {
                        a[0]='1';
                    }
                    else
                    {
                        a[0]='0';
                    }
                    reverse(a.begin(),a.begin()+1+i);
                    for(int j=0; j<=i; j++)
                    {
                        if(a[j]=='0')
                        {
                            a[j]='1';
                        }
                        else
                        {
                            a[j]='0';
                        }
                    }
                }
                else
                {
                    v.push_back(i+1);
                    cnt++;
                    reverse(a.begin(),a.begin()+1+i);
                    for(int j=0; j<=i; j++)
                    {
                        if(a[j]=='0')
                        {
                            a[j]='1';
                        }
                        else
                        {
                            a[j]='0';
                        }
                    }
                }
            }
        }
        cout<<cnt<<" ";
        for(auto u:v)
            cout<<u<<" ";
        cout<<endl;
    }
}
