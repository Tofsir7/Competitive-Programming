#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
long long factorial(int n)
{
    long long fact=1;
    for(int i=1;i<=n;i++)
        fact*=i;
        return fact;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string first,second;
    int sum=0,already=0,plusMinus=0,question;
    cin>>first;
    cin>>second;
    for(int i=0; i<first.size(); i++)
    {
        if(first[i]=='+')
        {
             sum++;
        }
        else
            sum--;
    }
    for(int i=0; i<second.size(); i++)
    {
        if(second[i]=='+')
        {
            already++;
            plusMinus++;
        }
        else if(second[i]=='-')
        {
            already--;
            plusMinus++;
        }
    }
    question=second.size()-plusMinus;
    if(question+already<sum || already-question>sum)
    {
        cout<<"0.000000000000"<<endl;
    }
    else
    {
         int def=max(sum,already)-min(sum,already);
         int r=(def+question)/2;
         int combination= (double)factorial(question)/(factorial(r)*factorial(question-r));
         int event=pow(2,question);
         printf("%.12lf",(double)combination/event);
         cout<<endl;
         //cout<<question<<" "<<def<<" "<<r<<" "<<event<<" "<<question<<endl;
    }
}
