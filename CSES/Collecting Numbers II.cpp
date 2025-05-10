#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int ans=0, n;
	cin>>n;
	vector<int>numbers(n),index(n);
	cin>>numbers[0];
	for(int i=1;i<n;i++)
	{
		cin>>numbers[i];
		index[numbers[i]]=i;
	}
	for(int i=1;i<n;i++)
	{
		if(index[i]>index[i+1])
		ans++;
	}
	cout<<ans+1<<endl;
}
