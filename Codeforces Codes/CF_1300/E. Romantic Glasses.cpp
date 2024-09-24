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
        long long ar[n+2],s=0;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        map<long long,long long>repeat;
        repeat[0]=1;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                s-=ar[i];
            else
                s+=ar[i];
            if(repeat[s])
            {
                cout<<"YES"<<endl;
                goto next;
            }
            repeat[s]++;
        }
        cout<<"NO"<<endl;
        next:
            bool finish=true;
    }
}
