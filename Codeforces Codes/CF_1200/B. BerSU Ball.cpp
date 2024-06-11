#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll b,g,flag=0,a;
    vector<ll>boys;
    vector<ll>girls;
    vector<ll>::iterator it;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>a;
        boys.push_back(a);
    }
    sort(boys.begin(),boys.end());
    cin>>g;
    for(int i=0;i<g;i++)
    {
        cin>>a;
        girls.push_back(a);
    }
    sort(girls.begin(),girls.end());
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<g;j++)
        {
            int dif=abs(boys[i]-girls[j]);
            if(dif<2)
            {
                flag++;
                it=girls.begin()+j;
               // cout<<*it<<endl;
                girls.erase(it);
                g--;
                break;
            }
        }
    }
    cout<<flag<<endl;
}
