#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
bool primenum(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                bool status=false;
                if(primenum(n/i)||primenum(i))
                    status=true;
                if(status==true)
                {
                    cout<<n/i<<" "<<(i-1)*(n/i)<<endl;
                    goto next;
                }
                else if(i%2==0)
                {
                    cout<<(i/2)*(n/i)<<" "<<(i/2)*(n/i)<<endl;
                    goto next;
                }
                else
                {
                    cout<<(i/2)*(n/i)<<" "<<(i/2+1)*(n/i)<<endl;
                    goto next;
                }
            }

        }
        cout<<1<<" "<<n-1<<endl;
next:
        continue;
    }
}
