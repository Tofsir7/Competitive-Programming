#include<bits/stdc++.h>
using namespace std;
bool divisor(long long int ar[],long long int flag,long long int n,long long  int k)
{
    long long int c=0;
    for(long long int i=flag;i<n;i++)
    {
        if(ar[flag]%ar[i]==0)
            c++;
        if(c==k)
            return true;
    }
    return false;
}
void bs(long long int ar[],long long int low,long long int high,long long int n,long long int k)
{
    long long int ans=-2;
    while(low<=high)
    {
        long long int mid=(low+high)/2;
        if(divisor(ar,mid,n,k))
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<ans+1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k;
    cin>>n>>k;
    long long int ar[200010];
    for(long long int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    bs(ar,0,n,n,k);
}

