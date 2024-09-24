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
        long long int mod=1,x,n,m;
        cin>>n>>m;
        vector<int>ar(n),br(n),rem(n);
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int left=0,right=n-1;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='L')
                left++;
            else
                right--;
        }
        int j=0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='L')
            {
                left--;
                br[j++]=ar[left];
            }
            else
            {
                right++;
                br[j++]=ar[right];
            }
        }
        rem[0]=br[0]%m;
        for(int i=1; i<br.size(); i++)
        {
            rem[i]=(rem[i-1]*(br[i]%m))%m;
        }
        for(int i=rem.size()-1; i>=0; i--)
        {
            cout<<rem[i]<<" ";
        }
        cout<<endl;
    }
}
