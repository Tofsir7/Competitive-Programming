#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n+5][m+5];
    long long pre[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>ar[i][j];
    }
    pre[0][0]=ar[0][0];
    for(int i=1;i<m;i++)
        pre[0][i]=pre[0][i-1]+ar[0][i];
    for(int i=1;i<n;i++)
        pre[i][0]=pre[i-1][0]+ar[i][0];
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            pre[i][j]=pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1]+ar[i][j];
            //cout<<
        }
    }
    cout<<endl<<"Prefix sum 2d array is:  "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<pre[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

