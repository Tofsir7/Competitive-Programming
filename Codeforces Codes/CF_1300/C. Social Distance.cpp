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
        int n,k,cnt=0,one=0;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                cnt++;
        }
        if((s[0]=='0' && s[1]=='0' && n==2)||(s[0]=='0' && n==1))
        {
            cout<<1<<endl;
        }
        else
        {
            if(cnt==n)
            {
                if(cnt%(k+1)==0)
                {
                    ans=cnt/(k+1);
                }
                else
                {
                    ans=cnt/(k+1)+1;
                }
            }
            else
            {
                cnt=0;
                for(int i=0; i<n; i++)
                {
                    if(s[i]=='1')
                    {
                        if(one==0)
                        {
                            if(cnt>k)
                            {
                                ans+=cnt/(k+1);
                            }
                        }
                        else
                        {
                            if(cnt>2*k)
                            {
                                ans+=(cnt-2*k-1)/(k+1)+1;
                            }
                        }
                        cnt=0;
                        one=1;
                    }
                    else
                    {
                        cnt++;
                    }
                }
                if(s[n-1]!='1')
                {
                    if(cnt>k)
                    {
                        ans+=cnt/(k+1);
                    }
                }
            }

            cout<<ans<<endl;
        }
    }
}
