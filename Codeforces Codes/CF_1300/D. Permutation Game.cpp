#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Tcase;
    cin>>Tcase;
    while(Tcase--){
       int n,k,pb,ps;
       long long max1=0,max2=0,sum1=0,sum2=0,Copy,cp;
       cin>>n>>k>>pb>>ps;
       long long int ar[n+2],pr[n+2];
       for(int i=0;i<n;i++){
                cin>>pr[i];
            }
       for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        Copy=k;
        cp=n;
        while(cp>0 && Copy>0){
            sum1+=ar[pb-1];
            long long int score=sum1+(ar[pb-1]*(Copy-1));
            max1=max(max1,score);
            pb=pr[pb-1];
            Copy--;
            cp--;}
        Copy=k;
        cp=n;
        while(cp>0 && Copy>0){
            sum2+=ar[ps-1];
            long long int score=sum2+(ar[ps-1]*(Copy-1));
            max2=max(max2,score);
            ps=pr[ps-1];
            Copy--;
            cp--;}
        if(max2>max1){
            cout<<"Sasha"<<endl;
        }
        else if(max2<max1){
            cout<<"Bodya"<<endl;
        }
        else
        cout<<"Draw"<<endl;
    }
}
