#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long man,group,Max,Min;
    cin>>man>>group;
    Max=((man-group)*(man-group+1))/2;
    long long Per_group=man/group;
    long long Big_group=man%group;
    Min=(Per_group*(Per_group+1)*Big_group)/2+(Per_group*(Per_group-1)*(group-Big_group))/2;
    cout<<Min<<" "<<Max<<endl;
}
