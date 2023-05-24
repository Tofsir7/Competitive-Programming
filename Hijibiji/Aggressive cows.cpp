#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int>v,int n,int c,int d)
{
    int pos=v[0];
    int count=1;
    for(int i=1; i<n; i++)
    {
        if(v[i]-pos>=d)
        {
            count++;
            pos=v[i];
        }
        if(count==c)
            return 1;
    }
    return 0;
}
void bs(vector<int>v,int n,int c)
{
    int low=0;
    int high=v[n-1]-v[0];
    int ans=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(possible(v,n,c,mid))
        {
            //cout<<"yes"<<mid<<" "<<high<<" "<<low<<endl;
            ans=mid;
            low=mid+1;

        }
        else
        {
            high=mid-1;
            // cout<<"no"<<endl;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc,x;
    cin>>tc;
    while(tc--)
    {
        int n,c;
        vector<int>v;
        cin>>n>>c;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        bs(v,n,c);
    }
    return 0;
}
