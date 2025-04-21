#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,x;
	cin>>n>>x;
	map<int,int>position;
	vector<int>numbers(n);
	for(int i=0;i<n;i++)
	{
		cin>>numbers[i];
		position[numbers[i]]=i;
	}
	sort(numbers.begin(),numbers.end());
	int i=0,j=n-1;
	while(i<j)
	{
		if(numbers[i]+numbers[j]==x)
		{
			cout<<min(position[numbers[i]],position[numbers[j]])+1<<" ";
			cout<<max(position[numbers[i]],position[numbers[j]])+1<<endl;
			return 0;
		}
		else if(numbers[i]+numbers[j]<x)
		i++;
		else
		j--;
	}
	cout<<"IMPOSSIBLE"<<endl;
}

