#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Tcase;
    cin>>Tcase;
    while(Tcase--)
    {
        int n;
        cin>>n;
        int ar[n+2],q,a,b,in;
        vector<int>p(n+2);
        for(int i=1; i<=n; i++)
            cin>>ar[i];
        p[1]=-1;
        for(int i=2;i<=n;i++)
        {
            if(ar[i]!=ar[i-1])
            {
                p[i]=i-1;
            }
            else
                p[i]=p[i-1];
        }
        cin>>q;
        while(q--)
        {
            cin>>a>>b;
            if(p[a]==p[b])
            {
                cout<<-1<<" "<<-1<<endl;
            }
            else
            {
                int c=p[a];
                int v=lower_bound(p.begin()+a,p.begin()+b,c+1)-p.begin();
                cout<<a<<" "<<v<<endl;
            }
        }
        cout<<endl;
    }
}
