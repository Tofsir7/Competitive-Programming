#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ar[30];
        for(int i=0;i<30;i++)
            ar[i]=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            int k=s[i]-97;
            ar[k]++;
        }
        sort(ar, ar + 30, greater<int>());
        int d=n-ar[0];
        if(d>ar[0])
            {
                if(n%2)
                    cout<<1<<endl;
                else
                    cout<<0<<endl;
            }
        else
            cout<<ar[0]-d<<endl;
    }
}
 
