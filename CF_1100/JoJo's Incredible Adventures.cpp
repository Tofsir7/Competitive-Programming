#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int cnt=0,m=0,n;
        string s;
        cin>>s;
        n=s.size();
        for(int i=0; i<n; i++)
        {
            if(s[i]-48==1)
                cnt++;
            else
                cnt=0;
            m=max(m,cnt);
        }
        if(n>1)
            for(int i=0; i<n; i++)
            {
                if(s[i]-48==1)
                    cnt++;
                else
                    break;
                m=max(m,cnt);
            }
        if(m/2==n)
            cout<<n*n<<endl;
        else
        {
            long long int ans,div;
            if(m%2)
            {
                div=(m/2)+1;
                ans=div*div;

            }
            else
            {
                div=m/2;
                ans=div*(div+1);
            }
            cout<<ans<<endl;
        }
    }
}
