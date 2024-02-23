/// Reading information from a file from the users
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age,i=0;
    string line;
    ifstream file("Details.txt");///reading from this file
    while(getline(file,line))
    {

        cout<<line<<endl;
    }
    file.close();
}
