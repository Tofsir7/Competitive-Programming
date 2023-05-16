#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w;
    vector<string>gridA,gridB,c_grid;
    cin>>h>>w;
    for(int i=0; i<h; i++)
    {
        string s;
        cin>>s;
        gridA.push_back(s);
    }
    for(int i=0; i<h; i++)
    {
        string s;
        cin>>s;
        gridB.push_back(s);
    }
    //cout<<endl;
    c_grid=gridA;
    for(int i=0; i<h; i++)
    {
        string s;
        s=c_grid[0];
        for(int j=0; j<h; j++)
        {
            if(j==h-1)
            {
                c_grid[j]=s;
            }
            else
            {
                c_grid[j]=c_grid[j+1];
            }
        }
        /*for(int z=0;z<h;z++)
                cout<<c_grid[z]<<endl;
            cout<<i<<endl;*/
        for(int n=0; n<w; n++)
        {
            for(int j=0; j<h; j++)
            {
                char c;
                c=c_grid[j][0];
                for(int k=0; k<w; k++)
                {
                    if(k==w-1)
                    {
                        c_grid[j][k]=c;
                    }
                    else
                    {
                        c_grid[j][k]=c_grid[j][k+1];
                    }

                }
            }
           /* for(int z=0;z<h;z++)
                cout<<c_grid[z]<<endl;
            cout<<endl;*/
            for(int x=0;x<h;x++)
            {
                for(int y=0;y<w;y++)
                {
                    if(c_grid[x][y]==gridB[x][y])
                        continue;
                    else
                    {
                        goto next;
                    }
                }
            }
            cout<<"Yes"<<endl;//" "<<i<<" "<<n<<endl;
            return 0;
            next:
                continue;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
