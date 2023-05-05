#include<bits/stdc++.h>
using namespace std;
#define optimiz() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        //optimiz();
        long long int n,c=0;
        long long int ar[100005];
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>ar[i];
        for(int i=1; i<n; i++)
        {
            long long int x;
            if((2*i+1)%ar[i]==0)
                x=i+1;
            else
            {
                x=(2*i+1)/ar[i];
                x=((x+1)*ar[i])-i;
            }
            //cout<<"x="<<x<<endl;
            for(int j=x; j<=n; j+=ar[i])
            {
                if(i+j==ar[i]*ar[j])
                {
                    //cout<<i<<" "<<j<<endl;
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}
