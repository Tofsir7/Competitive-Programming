 /*Learning: Maximum subarray sum can be acheived by using kadane's algorithm
Algorithm-
step-1: Initialising sum and maxSum is equal to starting number
step-2: Calculating sum is equal to the maximum of previous sum and current element
step-3: Calculating maxSum is equal to the maximum of current sum and itself*/


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
	vector<long long int>numbers(n);
	for(int i=0;i<n;i++)
	cin>>numbers[i];
	long long int sum=numbers[0],maxSum=numbers[0];
	for(int i=1;i<n;i++)
	{
		sum=max(sum+numbers[i],numbers[i]);
		maxSum=max(maxSum, sum);	
	}
	cout<<maxSum<<endl;
}

