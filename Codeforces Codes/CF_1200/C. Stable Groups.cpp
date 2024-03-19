#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n,k,x,group=1,add;
    cin>>n>>k>>x;
    long long int ar[n+5];
    vector<long long int>v;
    for(int i=0; i<n; i++)
        cin>>ar[i];
    sort(ar,ar+n);
    ar[n]=ar[n-1];
    for(int i=0; i<n; i++)
    {
        if(x<ar[i+1]-ar[i])
        {
            v.push_back(ar[i+1]-ar[i]);
            group++;
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        //double y=(double)2*x;
        //add=ceil(v[i]/y);
        add=v[i]/x;
        if(k-add>=0)
        {
            group--;
            k-=add;
        }
    }
    cout<<group<<endl;
    //cout<<ceil(4.0/2.0)<<endl;
}
