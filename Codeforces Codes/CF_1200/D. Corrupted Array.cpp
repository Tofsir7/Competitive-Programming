#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    cin>>Case;
    while(Case--)
    {
        int n;
        cin>>n;
        vector<long long int>ar(n+2);
        long long int sum=0,flag=0,x;
        for(int i=0; i<n+2; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        sort(ar.begin(),ar.end());
        sum-=(ar[n]+ar[n+1]);
        if(sum==ar[n] || sum==ar[n+1])
        {
            for(int i=0; i<n; i++)
                cout<<ar[i]<<" ";
            cout<<endl;
        }
        else
        {
            sum+=ar[n];
            for(int i=0; i<n; i++)
            {
                if(sum-ar[i]==ar[n+1])
                {
                    x=i;
                    flag=1;
                    break;
                }
            }
            if(flag)
            {
                for(int i=0; i<=n; i++)
                {
                    if(x!=i)
                        cout<<ar[i]<<" ";
                }
            }
            else
                cout<<-1;
            cout<<endl;
        }

    }
}
