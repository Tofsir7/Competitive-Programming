#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    cin>>Case;
    while(Case--)
    {
        long long n,x,y,i,j,Bsum,Ssum;
        cin>>n>>x>>y;
        i=n/x;
        j=n/y;
        if(x%y==0)
        {
            long long rem=j-i;
            cout<<(rem*(1+rem))/2*-1<<endl;
        }
        else
        {
            long long lcm=(x*y)/__gcd(x,y);
            long long baad=n/lcm;
            Bsum=((i-baad)*(n+n-i+baad+1))/2;
            Ssum=((j-baad)*(1+j-baad))/2;
            cout<<Bsum-Ssum<<endl;
        }
    }
}
