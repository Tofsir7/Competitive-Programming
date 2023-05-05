#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int ar[n+2],dif[n+2]={0},predif[n+2];
	for(int i=0;i<n;i++)
        cin>>ar[i];
    int q;
    cin>>q;
    while(q--)
    {
        int l,r,v;
        cin>>l>>r>>v;
        dif[l]+=v;
        dif[r+1]-=v;
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
            predif[i]=dif[i];
        else
            predif[i]=dif[i]+predif[i-1];
    }
    cout<<"Final Array is: ";
    for(int i=0;i<n;i++)
        cout<<ar[i]+predif[i]<<" ";
    cout<<endl;
	return 0;
}
