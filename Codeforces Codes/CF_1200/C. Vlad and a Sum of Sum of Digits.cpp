#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int Case;
    vector<int>sum(200005);
    //long long int sum[200005];
    sum[1]=1;
    for(long long int i=2;i<=200001;i++)
    {
        long long int x=i,sm=0,a;
        while(x!=0)
        {
            a=x%10;
            sm+=a;
            x/=10;
        }
        sum[i]+=sum[i-1]+sm;
    }
    cin>>Case;
    while(Case--)
    {
        int n;
        cin>>n;
        cout<<sum[n]<<endl;
    }
}
 
