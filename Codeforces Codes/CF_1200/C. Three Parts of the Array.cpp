#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
long long int left(long long int ar[],int l,long long int sum)
{
    sum+=ar[l];
    return sum;
}
long long int right(long long int ar[],int r,long long int sum)
{
    sum+=ar[r];
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    long long int ar[n+5],mx=0,suml=0,sumr=0;
    for(int i=0; i<n; i++)
        cin>>ar[i];
    int l=-1,r=n;
    while(l<r)
    {
        if(suml==sumr)
        {
            mx=max(mx,suml);
            r--;
            l++;
            suml=left(ar,l,suml);
            sumr=right(ar,r,sumr);
        }
        else if(suml<sumr)
        {
            l++;
            suml=left(ar,l,suml);
        }
        else
        {
            r--;
            sumr=right(ar,r,sumr);
        }
    }
    cout<<mx<<endl;
}
///Tried something different <3......
