#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int total=0, n;
	cin>>n;
	vector<int>numbers(n);
	for(int i=0;i<n;i++)
	{
		cin>>numbers[i];
		total+=numbers[i];
	}
	//sort(numbers.begin(),numbers.end());
	int fixed=total/n;
	long long int ans=0;
	for(int i=0;i<n;i++)
	{
		ans+=abs(fixed-numbers[i]);
	}
	cout<<ans<<endl;
}

