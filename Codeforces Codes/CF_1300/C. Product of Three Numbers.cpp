#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
map<int,int>prime;
void seive()
{
    for( int i=2; i*i<=1000000000; i++)
    {
        if (prime[i]==1)
        {
            for (int j=i*i; j<=1000000000; j+=i)
                prime[j]=0;
        }
    }
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
        if(prime[n])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i=2; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    int a=i;
                    int d=n/i;
                    for(int j=2; j*j<=d; j++)
                    {
                        if(d%j==0 && d%j!=a)
                        {
                            int b=j;
                            int c=n/(a*b);
                            if(c!=a && c!=1 && c!=b && a!=b)
                            {
                                cout<<"YES"<<endl;
                                cout<<a<<" "<<b<<" "<<c<<endl;
                                goto next;
                            }
                        }
                    }
                }
            }
        }
        cout<<"NO"<<endl;
next:
        continue;
    }
}
