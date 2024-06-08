#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
vector<vector<long long> >op;
void trac(int a,int b,int c,int d)
{
    op.push_back({a,b,c,d});
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
        long long n,cnt=0,a=1134684961,b=1134685037;
        cin>>n;
        int ar[n+2];
        for(int i=1;i<=n;i++)
            cin>>ar[i];
        for(long long i=1;i<n;i++)
        {
            if(i%2==0)
            {
                trac(i,n,a,min(ar[i],ar[n]));
                ar[n]=min(ar[i],ar[n]);
            }
            else
            {
                trac(i,n,b,min(ar[i],ar[n]));
                ar[n]=min(ar[i],ar[n]);
            }
        }
        cout<<n-1<<endl;
        for(int i=0;i<n-1;i++)
        {
            cout<<op[i][0]<<" "<<op[i][1]<<" "<<op[i][2]<<" "<<op[i][3]<<endl;
        }
        op.clear();
    }
}
