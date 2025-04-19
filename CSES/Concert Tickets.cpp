#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,a;
	cin>>n>>m;
	multiset<int>tickets;
	multiset<int>::iterator it;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		tickets.insert(a);
	}
	for(int i=0;i<m;i++)
	{
		cin>>a;
		it= tickets.upper_bound(a);
		if(it==tickets.begin())
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<*(--it)<<endl;
			tickets.erase(it);
		}
	}
}

