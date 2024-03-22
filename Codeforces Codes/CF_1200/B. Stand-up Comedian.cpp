#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    cin>>Case;
    while(Case--)
    {
        int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;
        int mn=min(a2,a3);
        if(a1==0)
        {
            cout<<1<<endl;
        }
        else
        {
            int a23=abs(a2-a3);
            int jokesMara=a1+min(a2,a3)*2+min(a1+1,a23+a4);
            cout<<jokesMara<<endl;
        }
    }
}
