#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,index;
        string s;
        cin>>n>>k;
        cin>>s;
        if(k%2==0)
        {
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
        else
        {
            vector<char>even;
            vector<char>odd;
            char c;
            for(int i=0;i<n;i+=2)
            {
                c=s[i];
                even.push_back(c);
            }
            sort(even.begin(),even.end());
            for(int i=1;i<n;i+=2)
            {
                c=s[i];
                odd.push_back(c);
            }
            sort(odd.begin(),odd.end());
            int ev=0,od=0;
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    ////index=i/2;
                    cout<<even[ev];
                    ev++;
                }
                else
                {
                    //index=(i/2)+1;
                    cout<<odd[od];
                    od++;
                }
            }
            cout<<endl;
        }
    }
}
