#include<bits/stdc++.h>
using namespace std;
//#define optimiz() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long int n,b,a[2005];
    long int maxi=0;
    long int d;
    cin>>n>>b;
    for(int i=0; i<n; i++)
        cin>>a[i];
    if(n==1)
        cout<<b<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            d=b/a[i];
            for(int j=i; j<n; j++)
            {
                long int bu=d*a[j]+(b%a[i]);
                if(maxi<=bu)
                    maxi=bu;
            }
        }
        cout<<maxi<<endl;
    }
}


