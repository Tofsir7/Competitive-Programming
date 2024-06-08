#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,l;
  cin>>n>>l;
  vector<string>vs;
  for(int i=0;i<n;i++)
  {
  string s;
    cin>>s;
    vs.push_back(s);
  }
  sort(vs.begin(),vs.end());
  for(auto v:vs)
  cout<<v;
  cout<<endl;
}
