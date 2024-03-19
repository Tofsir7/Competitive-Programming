#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,a,b,c,x,y,ans=1;
    cin>>n>>a>>b>>c;
    if(a==1 || b==1 || c==1)
    {
        cout<<n<<endl;
        return 0;
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<n; j++)
        {
            x=n-(i*a+j*b);
            if(x<0)
                break;
            if(x%c==0)
            {
                int k=x/c;
                ans=max(ans,(i+j+k));
            }

        }
    }
    cout<<ans<<endl;
}
