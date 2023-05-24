#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        int z=0;
        cin>>n;
        cin>>s;
        int l=s.size();
        for(int i=0;i<l;i++)
            if(s[i]=='0')
            z++;
        if(z==1 || z%2==0)
            cout<<"BOB"<<endl;
        else
            cout<<"ALICE"<<endl;
    }
}
