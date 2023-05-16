#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w;
    vector<string>A;
    cin>>h>>w;
    int sz=min(h,w);
    int ar[sz+2];
    for(int i=0; i<sz+2; i++)
        ar[i]=0;
    for(int i=0; i<h; i++)
    {
        string s;
        cin>>s;
        A.push_back(s);
    }
    int ul=0,ur=0,dl=0,dr=0,ans;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            if(A[i][j]=='#')
            {
                int x=i,y=j;
                while(x<h-1 && y<w-1 && A[x+1][y+1]=='#')
                {
                    dr++;
                    x++;
                    y++;
                    //cout<<"ok "<<x<<" "<<y<<endl;
                }
                x=i;
                y=j;
                //cout<<x<<" "<<y<<endl;
                while( x<h-1 && y>0 && A[x+1][y-1]=='#')
                {
                    dl++;
                    x++;
                    y--;
                    //cout<<"ok1"<<endl;
                }
                x=i,y=j;
                while( x>0 && y<w-1 && A[x-1][y+1]=='#')
                {
                    ur++;
                    x--;
                    y++;
                    //cout<<"ok2"<<endl;
                }
                x=i,y=j;
                while( x>0 && y>0 && A[x-1][y-1]=='#')
                {
                    ul++;
                    x--;
                    y--;
                    //cout<<"ok3"<<endl;
                }
                ans=min({ul,ur,dl,dr});
                //cout<<ans<<endl;
                ar[ans]++;
                ul=0;
                ur=0;
                dl=0;
                dr=0;
            }
        }
    }
    for(int i=1; i<=sz; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}

