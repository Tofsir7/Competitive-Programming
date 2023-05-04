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
        int n,a,b;
        cin>>n>>a>>b;
        int d=n-1;
        int dif=b-a;
        if(dif%d==0)
        {
            for(int i=b;i>=a;i-=(dif/d))
                cout<<i<<"  ";
            cout<<endl;
        }
        else
        {
            while(dif%d!=0)
                d--;
            int sub=dif/d;
            int cnt=0,val;
            for(int i=cnt;i<n;i++)
            {
                val=b-(i*sub);
                if(val<1)
                    goto next;
                else
                {
                    cout<<val<<"  ";
                    cnt++;
                }
            }
            next:
                val=b;
            for(int i=cnt;i<n;i++)
            {
                //cout<<" cnt"<<cnt<<endl;
                val+=sub;
                cout<<val<<"  ";
            }
            cout<<endl;
        }
    }
}
