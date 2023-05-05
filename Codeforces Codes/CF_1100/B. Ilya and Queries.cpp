#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
int main()
{
    //init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int m,l,r;
    cin>>s;
    int sz=s.size();
    int ar[sz+5],c=0;
    ar[1]=0;
    for(int i=0;i<sz-1;i++)
    {
        if(s[i]==s[i+1])
            c++;
            ar[i+2]=c;
    }
    cin>>m;
    while(m--)
    {
        cin>>l>>r;
        cout<<ar[r]-ar[l]<<endl;
    }
}
