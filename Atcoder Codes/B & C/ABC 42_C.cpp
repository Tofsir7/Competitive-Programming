#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,a,n,flag=1;
    cin>>n;
    cin>>k;
    map<int,int>mp;
    for(int i=0; i<k; i++)
    {
        cin>>a;
        mp[a]++;
    }
    while(1)
    {
        flag=1;
        long long x=n;
        while(x)
        {
            a=x%10;
            x/=10;
            if(mp[a]!=0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<n<<endl;
            return 0;
        }
        else
            n++;
    }
    return 0;
}
