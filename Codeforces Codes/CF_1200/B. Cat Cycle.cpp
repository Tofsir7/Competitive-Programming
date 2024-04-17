#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    cin>>Case;
    while(Case--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            int ans=k%n;
            if(ans==0)
                ans=n;
            cout<<ans<<endl;
        }
        else
        {
            k+=(k-1)/(n/2);
            /*if(k%2)
            {
                k+=(k-1)/(n/2);
            }
            else
            {
                k+=(k/2)+1;
            }*/
            int ans=k%n;
            if(ans==0)
            cout<<ans<<endl;
        }
    }
}



