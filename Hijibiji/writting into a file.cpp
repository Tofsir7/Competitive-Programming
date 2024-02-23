/// Write information to a file from the users
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age,i=0;
    string line;
    ofstream file;
    file.open("Details.txt");//,ios::out|ios::app);///creating or opening a file
    ///"ios::out|ios::app" used for still keeping previous data


    file<<"SI"<<"\t\t"<<"Name"<<"\t\t"<<"Age"<<endl<<endl;
    cout<<"Enter Name and Age:"<<endl;
    while(getline(cin,line))
    {

        if(line=="0")
            break;
        else
        {
            cin>>age;
            file<<++i<<"\t\t"<<line<<"\t\t"<<age<<endl;
            cin.ignore();
        }
    }
    file.close();
}
