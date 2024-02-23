/// Reading information from a file from the users
#include <bits/stdc++.h>
using namespace std;
struct data
    {
        string name;
        int height_cm,weight_kg,income;
    };
bool compare(data a,data b)
    {
        if(a.income==b.income)
        {
            if(a.height_cm==b.height_cm)
            {
                if(a.weight_kg==b.weight_kg)
                    return a.name.size()>b.name.size();
                    //return strlen(a.name)<strlen(b.name);
                else
                    return a.weight_kg<b.weight_kg;
            }
            else
                return a.height_cm>b.height_cm;
        }
        else
            return a.income>b.income;
    }
int main()
{
    string n;
    int h,w,s;
    vector<data>details(100);
    cout<<"Input Name, Height, Weight and Salary:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>n>>h>>w>>s;
        details[i].name=n;
        details[i].height_cm=h;
        details[i].weight_kg=w;
        details[i].income=s;
    }
    sort(details.begin(),details.end(),compare);
    cout<<"Name"<<"\t"<<"Height"<<"\t"<<"Weight"<<"\t"<<"Salary"<<"\t"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<details[i].name<<"\t"<<details[i].height_cm<<"\t"<<details[i].weight_kg<<"\t"<<details[i].income<<endl;
    }
}

