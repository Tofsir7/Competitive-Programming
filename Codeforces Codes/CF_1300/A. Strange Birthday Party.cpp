#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Tcase;
    cin>>Tcase;
    while(Tcase--)
    {
        int n,m;
        cin>>n>>m;
        long long int k[n+5],c[m+5],cost=0;
        for(int i=0; i<n; i++)
            cin>>k[i];
        for(int i=0; i<m; i++)
            cin>>c[i];
        sort(k,k+n);
        int j=0;
        for(int i=n-1; i>=0; i--)
        {
            while(k[i]>j)
            {
                cost+=c[j];
                j++;
                goto next;
            }
            cost+=c[k[i]-1];
next:
            bool valid=true;
        }
        cout<<cost<<endl;
    }
}
