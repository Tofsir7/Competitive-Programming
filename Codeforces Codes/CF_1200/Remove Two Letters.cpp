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
        int n,cnt=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=1;i<n-1;i++)
        {
            if(s[i-1]==s[i+1])
                cnt++;
        }
        //cout<<cnt<<" cnt"<<endl;
           cout<<n-1-cnt<<endl;
    }
    return 0;
}


