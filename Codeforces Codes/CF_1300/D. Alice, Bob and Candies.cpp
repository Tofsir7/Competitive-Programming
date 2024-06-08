#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int Tcase;
    cin>>Tcase;
    while(Tcase--)
    {
        int n;
        cin>>n;
        int ar[n+5],must=0,alice=0,bob=0,Move=0,cur=0,left=0,right=n-1;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n;i++)
        {
            if(Move%2==0)
            {
                while(cur<=must)
                {
                    alice+=ar[left];
                    cur+=ar[left];
                    left++;
                    if(left>right)
                        {
                            Move++;
                            goto End;
                        }
                }
                must=cur;
                cur=0;
                Move++;
            }
            else
            {
                while(cur<=must)
                {
                    bob+=ar[right];
                    cur+=ar[right];
                    right--;
                    if(left>right)
                       {
                           Move++;
                           goto End;
                       }
                }
                must=cur;
                cur=0;
                Move++;
            }
        }
        End:
        cout<<Move<<" "<<alice<<" "<<bob<<endl;
    }
}
