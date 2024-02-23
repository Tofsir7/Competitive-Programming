#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int Tcase,Node,Edge,Diameter,Max;
    cin>>Tcase;
    while(Tcase--)
    {
        cin>>Node>>Edge>>Diameter;
        Max=(Node*(Node-1))/2;
        if(Edge>Max)
            cout<<"NO"<<endl;
        else if(Edge<Node-1)
            cout<<"NO"<<endl;
        else if(Node==1 && Edge==0 && Diameter>1)
            cout<<"YES"<<endl;
        else
        {
            if(Edge==Max)
            {
                if(Diameter>2)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                if(Diameter>3)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }
}
