#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int cnt[27],jhamela=0;
    for(int i=0;i<27;i++)
    cnt[i]=0;
    for(int i=0;i<s.size();i++)
    {
        int ascii=s[i]-97;
        cnt[ascii]++;
    }
    for(int i=0;i<27;i++)
    {
        if(cnt[i]%2==1)
            jhamela++;
    }
    if(jhamela<2 ||jhamela%2==1)
    {
        cout<<"First"<<endl;
    }
    else
        cout<<"Second"<<endl;
}
