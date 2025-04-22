#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool compare(pair<int,int>a,pair<int,int>b)
{
	if(a.first<b.first)
	return true;
	else
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,x,a;
	cin>>n>>x;
	vector<pair<int,int> >numbers;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		numbers.push_back(make_pair(a,i));
	}
	sort(numbers.begin(),numbers.end(),compare);
	int i=0,j=n-1;
	while(i<j)
	{
		if(numbers[i].first+numbers[j].first==x)
		{
			cout<<min(numbers[i].second+1,numbers[j].second+1)<<" ";
			cout<<max(numbers[i].second+1,numbers[j].second+1)<<endl;
			return 0;
		}
		else if(numbers[i].first+numbers[j].first<x)
		i++;
		else
		j--;
	}
	cout<<"IMPOSSIBLE"<<endl;
}

