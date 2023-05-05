#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        int a[200005];
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int up=0,down=0,c_up=0,c_down=0;
        for(int i=n-1; i>0; i--)
        {
            if(a[i]<a[i-1])
            {

                if(up==1 && down==1 && c_up==0)
                {
                    cout<<i<<endl;
                    flag=1;
                    break;
                }
                else
                {
                    up=1;
                    c_up=1;
                    c_down=0;
                }
            }
            else if(a[i]>a[i-1])
            {
                up=1;c_up=1;
                if(up==1 && down==1 && c_down==0)
                {
                    cout<<i<<endl;
                    flag=1;
                    break;
                }
                else
                {
                    down=1;
                    c_down=1;
                    c_up=0;
                }
            }
            }
            if(!flag)
                cout<<0<<endl;
    }
}

