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
        int n;
        cin>>n;
        int a;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            mp[a%10]++;
        }
        if(mp[1]>2)
        {
            cout<<"YES"<<endl;
            goto next;
        }
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                for(int k=0; k<10; k++)
                {
                    if((i==j && i!=k && mp[i]>1))
                    {
                        if((i+j+k)%10==3 && mp[k]!=0)
                        {
                            cout<<"YES"<<endl;
                            goto next;
                        }
                    }
                    else if((i==k && i!=j && mp[i]>1))
                    {
                        if((i+j+k)%10==3 && mp[j]!=0)
                        {
                            cout<<"YES"<<endl;
                            goto next;
                        }
                    }
                    else if((k==j && k!=i && mp[k]>1))
                    {
                        if((i+j+k)%10==3 && mp[i]!=0)
                        {
                            cout<<"YES"<<endl;
                            goto next;
                        }
                    }
                    else if(i!=j && j!=k && k!=i)
                    {
                        if(mp[i]!=0 && mp[j]!=0 && mp[k]!=0 && (i+j+k)%10==3)
                        {
                            //cout<<i<<j<<k<<endl;
                            cout<<"YES"<<endl;
                            goto next;
                        }
                    }
                }
            }
        }
        cout<<"NO"<<endl;
next:
        bool finish=true;
    }
}
