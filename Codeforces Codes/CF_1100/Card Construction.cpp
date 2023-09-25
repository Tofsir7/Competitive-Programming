#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int h,ar[30000];
        cin>>h;
        ar[0]=0;
        long long int n=0,c=0,i=1;
        while(n<=1000000000)
        {
            n+=(i-1)+(i*2);
            ar[i]=n;
            i++;
            //cout<<ar[i-1]<<endl;
        }
        //cout<<i<<endl;
        for(int j=i-1;j>0;j--)
        {
            if(ar[j]<=h)
            {
                while(h>=ar[j])
                {
                    c++;
                    h-=ar[j];
                    //cout<<h<<"=h"<<j<<" "<<ar[j]<<endl;
                }

            }
            if(h<=0)
                break;
        }
        cout<<c<<endl;
    }
}
