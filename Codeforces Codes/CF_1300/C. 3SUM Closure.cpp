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
        long long int n,a,neg=0,pos=0,zero=0;
        cin>>n;
        vector<long long int>ar;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a>0)
            {
                pos++;
                ar.push_back(a);
            }
            else if(a<0)
            {
                neg++;
                ar.push_back(a);
            }
            else
            {
                if(!zero)
                {
                    ar.push_back(0);
                    zero++;
                }
            }
        }
        if(neg>2 || pos>2)
        {
            cout<<"NO"<<endl;
            goto next;
        }
        n=ar.size();
        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    long long int sum=ar[i]+ar[j]+ar[k];
                    if(find(ar.begin(),ar.end(),sum)==ar.end())
                    {
                        cout<<"NO"<<endl;
                        goto next;
                    }
                }
            }
        }
        cout<<"YES"<<endl;
next:
        bool finish=true;
    }
}
