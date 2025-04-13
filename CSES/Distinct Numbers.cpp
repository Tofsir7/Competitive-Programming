#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int>li;
	int a,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		li.insert(a);
	}
	cout<<li.size()<<endl;
}
