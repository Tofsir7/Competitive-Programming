#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int ans=1, n;
	cin>>n;
	vector<int>numbers(n);
	cin>>numbers[0];
	for(int i=1;i<n;i++)
	{
		cin>>numbers[i];
	}
	sort(numbers.begin(),numbers.end());
	for(int i=0;i<n;i++)
	{
		if(numbers[i]<=ans)
		ans+=numbers[i];
		else
		{
			cout<<ans<<endl;
			return 0;
		}
	}
	cout<<ans<<endl;
}
s
