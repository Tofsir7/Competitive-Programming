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
        int n,x,m,l,r,lmin,rmax;
        cin>>n>>x>>m;
        lmin=rmax=x;
        while(m--)
        {
            cin>>l>>r;
            if(l<=lmin && r>=lmin)
            {
                lmin=min(l,lmin);
                rmax=max(r,rmax);
            }
            else if(l<=rmax && r>=rmax)
            {
                lmin=min(l,lmin);
                rmax=max(r,rmax);
            }
        }
        cout<<rmax-lmin+1<<endl;
    }
}
