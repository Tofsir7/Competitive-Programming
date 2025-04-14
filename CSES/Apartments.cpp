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
	
	int count=0;
	for(int i=0;i<m;i++)
	{
		if(upper_bound(ar.begin(),ar.end(),br[i]-k)!=lower_bound(ar.begin(),ar.end(),br[i]+k))
		{
		count++;
		int index=upper_bound(ar.begin(),ar.end(),br[i]-k)-ar.begin();
		ar[index]=INT_MIN;
		//cout<<"i= "<<i<<"= "<<<<endl;
	}
	}
	
	cout<<count<<endl;
//	cout<<upper_bound(ar.begin(),ar.end(),38)-ar.begin()<<endl;
//	cout<<lower_bound(ar.begin(),ar.end(),42)-ar.begin()<<endl;
}

