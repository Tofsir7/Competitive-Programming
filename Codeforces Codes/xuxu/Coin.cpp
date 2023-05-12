// How many ways we can make 1000 tk using BD current coins/notes?
#include<bits/stdc++.h>
using namespace std;
int tk[1001];
int main()
{
    int notes[10]={1,2,5,10,20,50,100,200,500,1000}; //BD notes/coins
    tk[0]=1;
    for(int i=0;i<10;i++)
    {
        for(int j=notes[i],k=0;j<=1000;j++,k++)
        {
            tk[j]+=tk[k];
        }
    }
    /*for(int i=1;i<=1000;i++)
    cout<<i<<" note can be made by "<<tk[i]<<" ways"<<endl;*/
    cout<<"1000tk note can be made by "<<tk[1000]<<" ways"<<endl;
}
