#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
       long long n,k;
       cin>>n>>k;
       int x=(1+sqrt(1+8*k))/2;
       cout<<x<<endl;
    }
}

