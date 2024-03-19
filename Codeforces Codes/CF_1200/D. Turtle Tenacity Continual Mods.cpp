#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    cin>>Case;
    while(Case--)
    {
        long long int n;
        cin>>n;
        long long int ar[n+5],b=1;
        //unsigned long long int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(int i=1; i<n; i++)
        {
            if(ar[i]==ar[0])
                b++;
        }
        if(b==1)
            cout<<"YES"<<endl;
        else
        {
            sort(ar,ar+n);
            int m=ar[0];
            for(int i=0; i<n; i++)
            {
                if(ar[i]%m!=0)
                {
                    cout<<"YES"<<endl;
                    goto x;
                }
            }
            cout<<"NO"<<endl;
x:
            int c=0;

        }


    }
}
