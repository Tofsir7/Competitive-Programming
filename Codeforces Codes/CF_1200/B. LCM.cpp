#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int b,cnt=0,i,root;
    cin>>b;
    if(b==1)
    {
        cout<<1<<endl;
        return 0;
    }
    for(i=1; i*i<=b; i++)
    {
        if(b%i==0)
            cnt++;
    }
    if((i-1)*(i-1)==b)
        cout<<cnt*2-1<<endl;
    else
        cout<<cnt*2<<endl;
    return 0;
}

