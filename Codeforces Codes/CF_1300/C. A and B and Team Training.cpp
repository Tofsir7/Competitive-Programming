#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,m,mx;
    cin>>n>>m;
    int ans=(n+m)/3;
    cout<<min(ans,min(n,m))<<endl;
}
