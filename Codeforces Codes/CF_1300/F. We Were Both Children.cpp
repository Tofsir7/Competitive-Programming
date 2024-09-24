#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int n,mx=0;
        cin>>n;
        vector<int>ar(n);
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
        }
        for(int i=1; i<=n; i++)
        {
            int cnt=mp[i];
            if(i>1)
                cnt+=mp[1];
            for(int j=2; j*j<=i; j++)
            {
                if(i%j==0 && j*j!=i)
                {
                    cnt+=(mp[j]+mp[i/j]);
                }
                else if(i%j==0 && j*j==i)
                {
                    cnt+=mp[j];
                }
            }
            mx=max(mx,cnt);

        }
        cout<<mx<<endl;
    }
}
