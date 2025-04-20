#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>times(2*n);
	map<int,int>count;
	int a,b,j=0;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		count[a]++;
		count[b]--;
		times[j]=a;
		j++;
		times[j]=b;
		j++;
	}
	int max=-2,total=0;
	sort(times.begin(),times.end());
//		for(int i=0;i<2*n;i++)
//	{
//		cout<<times[i]<<" ";
//	}
//	cout<<endl;
	for(int i=0;i<2*n;i++)
	{
		total+=count[times[i]];
		//cout<<"total"<<total<<endl;
		if(total>=max)
		max=total;
	}
	cout<<max<<endl;
}

