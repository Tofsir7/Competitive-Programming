#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Tcase;
    cin>>Tcase;
    while(Tcase--)
    {
        long long int coder,math,vudai,team,member;
        cin>>coder>>math>>vudai;
        member=coder+math+vudai;
        team=min(coder,math);
        if(team==0)
        {
            cout<<0<<endl;
        }
        else
        {
            if(member/team>=3)
                cout<<team<<endl;
            else
                cout<<member/3<<endl;
        }

    }
}
