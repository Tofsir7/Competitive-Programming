#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
int main()
{
    init_code();
    int t;
    cin>>t;
    long long int s=0,a[t+5];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        //s+=a[i];
    }
    long long int n=pow(2,t)-1;
    //cout<<n<<" "<<s<<endl;
    for(int i=0;i<=n;i++)
    {
        long long rem=0;
        bitset<64>sub(i);
        for(int j=0;j<t;j++)
        {
            //cout<<sub[j];
            if(sub[j]==0)
                rem-=a[j];
            else
                rem+=a[j];
        }
        //cout<<endl;
        if(rem%360==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

}
