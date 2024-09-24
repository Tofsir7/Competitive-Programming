#include<bits/stdc++.h>
using namespace std;
int parent[10002],Size[10000+2];
#define endl "\n";
void Make(int v)
{
    parent[v]=v;
    Size[v]=1;
}
int Find(int v)
{
    if(parent[v]==v)
        return v;
    else
        return parent[v]=Find(parent[v]);
}
void Union(int a,int b)
{
    a=Find(a);
    b=Find(b);
    if(a!=b)
    {
        if(Size[a]<Size[b])
            swap(a,b);
        parent[b]=a;
        Size[a]+=Size[b];
    }
}
int main()
{

}
