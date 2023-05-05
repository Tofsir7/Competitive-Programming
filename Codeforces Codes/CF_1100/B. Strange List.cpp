#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,x,a;
    cin>>t;
    while(t--)
    {
        long long int maxsum=0;
        cin>>n>>x;
        vector<int>v(n);
        vector<int>vc(n);
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            maxsum+=a;
        }
        int add=x;
        bool rec=true;
        while(rec)
        {
            for(int i=0; i<v.size(); i++)
            {
                if(v[i]%x!=0)
                {
                    rec=false;
                    break;
                }
                else
                {
                    int ele=v[i]/x;
                        vc.push_back(ele);
                        maxsum+=ele*add;
                }

            }
            v=vc;
            add=add*x;
            vc.clear();
        }
        cout<<maxsum<<endl;
        v.clear();
    }
}
