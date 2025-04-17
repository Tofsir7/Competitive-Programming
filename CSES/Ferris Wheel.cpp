#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int ar[n+2];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    sort(ar,ar+n);
    int ans=n;
    int i=0,j=n-1;
    while(i<j)
    {
    	if(ar[i]+ar[j]>x)
    	j--;
    	else
    	{
    		ans--;
    		i++;
    		j--;
		}
	}
    //2 3 7 9
    //i=0 j=3
    //i=0 j=2
    //i=1 j=1
    cout<<ans<<endl;
}
