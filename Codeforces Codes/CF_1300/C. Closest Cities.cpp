#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int n,m;
        cin>>n;
        vector<int>ar(n),left(n),right(n);
        for(int i=0; i<n; i++)
            cin>>ar[i];
        cin>>m;
        left[0]=0;right[0]=0;
        for(int i=0; i<n-1; i++)
        {
            int a=abs(ar[i+1]-ar[i]);
            int b=abs(ar[i+2]-ar[i+1]);
            if(a<b)
            left[i+1]=left[i]+1;
            else
            left[i+1]=left[i]+(ar[i+2]-ar[i-1]);
        }
        left[n-1]=left[n-2]+(ar[n-1]-ar[n-2]);
        for(int i=0;i<n;i++)
            cout<<left[i]<<" ";
        cout<<endl;
        while(m--)
        {

        }

    }
}

