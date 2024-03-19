#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    cin>>Case;
    while(Case--)
    {
        int n;
        cin>>n;
        int x=(n*(n-1))/2;
        int p=x;
        vector<int>ar(x);
        for(int i=0;i<x;i++)
        {
            cin>>ar[i];
        }
        sort(ar.begin(),ar.end());
        cout<<ar[0]<<" ";
        x=0;
        while(n>2)
        {
            n--;
            x+=n;
            cout<<ar[x]<<" ";
        }
        cout<<ar[p-1]<<endl;
    }
}
