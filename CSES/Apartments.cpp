#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,k;
	cin>>n>>m>>k;
	vector<int>ar(n),br(m);
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>br[i];
	}
	sort(ar.begin(),ar.end());
	sort(br.begin(),br.end());
	
	int i=0,j=0,count=0;
	while(i<n && j<m)
	{
		if(ar[i]-k<=br[j] && br[j]<=ar[i]+k)
		{
			i++;
			j++;
			count++;
		}
		else if(ar[i]-k>br[j])
		{
			j++;
		}
		else if(ar[i]+k<br[j])
		{
			i++;
		}
	}
	cout<<count<<endl;
}

