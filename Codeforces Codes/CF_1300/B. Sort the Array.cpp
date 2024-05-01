#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,left=-1,right=-1,flag=1;
    cin>>n;
    int ar[n+5];
    for(int i=0; i<n; i++)
        cin>>ar[i];
    for(int i=0; i<n; i++)
    {
        if(ar[i]>ar[i+1])
        {
            left=i;
            break;
        }
    }
    for(int i=n-1; i>0; i--)
    {
        if(ar[i]<ar[i-1])
        {
            right=i;
            break;
        }
    }
    if(right==-1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else
    {
        int br[n+5];
        for(int i=0; i<n; i++)
            br[i]=ar[i];
        int j=left;
        for(int i=right; i>=left; i--)
        {
            br[j]=ar[i];
            j++;
        }
        sort(ar,ar+n);
        for(int i=0; i<n; i++)
        {
            if(ar[i]!=br[i])
            {
                cout<<"no"<<endl;
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<"yes"<<endl;
            cout<<left+1<<" "<<right+1<<endl;
        }
    }
}
