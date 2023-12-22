#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int one,zero,x;
    cin>>zero>>one>>x;
    if(x>1)
    {
        if(zero>one)
        {
            while(x>1)
            {
                cout<<"01";
                x-=2;
                zero--;
                one--;
            }
            if(x%2==1)
            {
                for(int i=0; i<zero; i++)
                    cout<<0;
                for(int i=0; i<one; i++)
                    cout<<1;
            }
            else
            {
                for(int i=0; i<one; i++)
                    cout<<1;
                for(int i=0; i<zero; i++)
                    cout<<0;
            }
        }
        else if(one>zero)
        {
            while(x>1)
            {
                cout<<"10";
                x-=2;
                zero--;
                one--;
            }
            if(x%2==0)
            {
                for(int i=0; i<zero; i++)
                    cout<<0;
                for(int i=0; i<one; i++)
                    cout<<1;
            }
            else
            {

                for(int i=0; i<one; i++)
                    cout<<1;
                for(int i=0; i<zero; i++)
                    cout<<0;
            }
        }
        else
        {
            while(x>1)
            {
                cout<<"01";
                x-=2;
                zero--;
                one--;
            }
            if(x%2==0)
            {
                for(int i=0; i<one; i++)
                    cout<<1;
                for(int i=0; i<zero; i++)
                    cout<<0;
            }
            else
            {
                for(int i=0; i<zero; i++)
                    cout<<0;
                for(int i=0; i<one; i++)
                    cout<<1;
            }
        }
    }
    else
    {
        for(int i=0; i<zero; i++)
            cout<<0;
        for(int i=0; i<one; i++)
            cout<<1;
    }
}
