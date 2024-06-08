#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
void primeFactors(long long n)
{
    long long x=n;
    map<int,int>cnt;
    while(n%2==0)
    {
        cnt[2]++;
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            cnt[i]++;
            n/=i;
        }
    }
    if(n>2)
        cnt[n]++;
    long long mx=1,fact=x;
    for(auto u:cnt)
    {
        if(u.second>mx)
        {
            mx=u.second;
            fact=u.first;
        }
    }
    long long part=pow(fact,mx-1)+0.00000000001;
    cout<<mx<<endl;
    for(int i=1;i<mx;i++)
        cout<<fact<<" ";
    cout<<x/part<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        long long n;
        cin>>n;
        primeFactors(n);
    }
}
