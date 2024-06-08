#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    long long int ar[n+5],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    long long gd=ar[0];
    for(int i=1;i<n;i++)
    gd=__gcd(gd, ar[i]);
    for(long long int i=1;i*i<=gd;i++)
    {
    if(gd%i==0)
    {
        if(i*i==gd)
        c++;
        else
        c+=2;
    }
    }
    cout<<c<<endl;
}
