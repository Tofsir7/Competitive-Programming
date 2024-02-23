#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int ar[n+5],odd[n+5],o=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]%2==1)
            {
                o++;
            }
            odd[i]=o;
        }
        long long int sum=ar[0];
        cout<<sum<<" ";
        for(int i=1;i<n;i++)
        {
            sum+=ar[i];
            if(odd[i]%3==1)
            {
                cout<<sum-(odd[i]+2)/3<<" ";
            }
            else
                cout<<sum-odd[i]/3<<" ";
        }
        cout<<endl;
    }
}
