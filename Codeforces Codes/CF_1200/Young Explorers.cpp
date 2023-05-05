#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int group=0,rem=0;
        map<int,int>mp;
        int n,a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            mp[a]++;
        }
        for(auto i:mp)
        {
            int x=i.first;
            int y=i.second;
            y+=rem;
            group+=y/x;
            if(y%x==0)
                rem=0;
            else
                rem=y%x;

        }
        cout<<group<<endl;
    }
}





