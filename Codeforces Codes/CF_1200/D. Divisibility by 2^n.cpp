#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    cin>>Case;
    while(Case--)
    {
        int n,power=0,flag=1;
        cin>>n;
        int ar,extra[n+2];
        for(int i=1;i<=n;i++)
        {
            cin>>ar;
            while(ar%2==0)
            {
                power++;
                ar/=2;
            }
            int mul=i,cnt=0;
            while(mul%2==0)
            {
                cnt++;
                mul/=2;
            }
            extra[i-1]=cnt;
        }
        if(n<=power)
        {
            cout<<0<<endl;
        }
        else
        {
            sort(extra,extra+n,greater<int>());
            for(int i=0;i<n;i++)
            {
                power+=extra[i];
                if(n<=power)
                {
                    cout<<i+1<<endl;
                    flag=0;
                    break;
                }
            }
            if(flag)
                cout<<-1<<endl;
        }
    }
}
