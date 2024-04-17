#include<bits/stdc++.h>
using namespace std;
int main()
{int Case;

    cin>>Case;
    while(Case--){string s="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        int n;
        cin>>n;
        int ar[n+5];
        for(int i=0; i<n; i++)cin>>ar[i];cout<<s<<endl;
        for(int i=0;i<n;i++){
            if(s[ar[i]]=='a'){s[ar[i]]='b';}
            else{s[ar[i]]='a';}
            cout<<s<<endl;}}}
