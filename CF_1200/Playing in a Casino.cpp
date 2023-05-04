#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
int main()
{
    init_code();
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a;
        cin>>n>>m;
        //vector<vector<long long int>>v;
        long long int ar[m][n],v[m][n];
        unsigned long long int sum=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>v[j][i];
                //v[j].push_back(a);
            }
        }
        //cout<<"yes";
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        { 
            for(int i=0; i<m; i++)
            {
                sort(v[i],v[i]+n);
                ar[i][n-1]=v[i][n-1];
                for(int j=n-2; j>=0; j--)
                {
                    ar[i][j]=ar[i][j+1]+v[i][j];
                    //cout<<"yes"<<" "<<ar[i][j]<<endl;;
                }
                ///cout<<"........"<<endl;
            }
            for(int i=0; i<m; i++)
            {
                for(int j=0; j<n-1; j++)
                {
                    sum+=(ar[i][j+1]-(v[i][j]*(n-1-j)));
                }
            }
            cout<<sum<<endl;
        }
    }
}
