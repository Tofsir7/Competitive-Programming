#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int small[105],large[105],m,s,mc,sc;
    cin>>m>>s;
    mc=m;
    sc=s;
    if(m==1 && s==0)
        cout<<0<<" "<<0<<endl;
    else if(s==0 || 9*m<s)
        cout<<-1<<"  "<<-1<<endl;
    else
    {
        int i=0;
        while(i<m)
        {
            if(sc>=9)
            {
                large[i]=9;
                sc-=9;
            }
            else
            {
                large[i]=max(0,sc);
                sc=0;
            }
            i++;
        }
        int k=0;
        s--;
        while(k<m-1)
        {
            if(s>=9)
            {
                small[k]=9;
                s-=9;
            }
            else
            {
                small[k]=max(0,s);
                s=0;
            }
            k++;
        }
        small[k]=max(1,s+1);
        for(int j=m-1;j>=0;j--)
            cout<<small[j];
        cout<<" ";
        for(int j=0; j<i; j++)
            cout<<large[j];
            cout<<endl;
    }
}
