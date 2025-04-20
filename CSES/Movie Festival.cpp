//Learning- in boolian comparison function returns false for '='
// So, sorting in ascending order we should use a<b otherwise it may produce RE in some cases

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
struct structure{
	int start;
	int end;
};
bool comparison(structure a, structure b)
{
	if(a.end<b.end)
	return true;
	else
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin>>n;
	vector<structure>movies(n);
	
	int a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		movies[i].start=a;
		movies[i].end=b;
	}
	int total=1;
	sort(movies.begin(),movies.end(),comparison);
	
	int cmpValue=movies[0].end;
	for(int i=1;i<n;i++)
	{
	    if(movies[i].start>=cmpValue)
	    {
	    	total++;
	    	cmpValue=movies[i].end;
		}
	}
	cout<<total<<endl;

}

