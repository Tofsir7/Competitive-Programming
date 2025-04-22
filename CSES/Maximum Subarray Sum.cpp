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
	vector<int>numbers(n);
	for(int i=0;i<n;i++)
	cin>>numbers[i];
	long long int sum=0,maxSum=INT_MIN;
	for(int i=0;i<n;i++)
	{
//		if(sum+numbers[i]<0)
//		{
//			maxSum=sum;
//			i++;
//			sum=numbers[i];
//		}
//		else
//		{
//			sum+=numbers[i];
//			maxSum=max(sum,maxSum);
//		}
		long long int x=numbers[i];
		maxSum=max(maxSum,x);
		sum+=numbers[i];
		if(sum<0)
		{
			sum=0;
		}
		else
		maxSum=max(maxSum,sum);
	}
	cout<<maxSum<<endl;
}

