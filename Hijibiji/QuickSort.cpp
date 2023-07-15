#include <bits/stdc++.h>
using namespace std;
int partition(int roll[],string name[],int age[],string gender[], int low, int high)
{
    int pivot = roll[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (roll[j] <= pivot)
        {
            i++;
            swap(roll[i], roll[j]);
            swap(name[i], name[j]);
            swap(age[i], age[j]);
            swap(gender[i], gender[j]);
        }
    }
    swap(roll[i+1], roll[high]);
    swap(name[i+1], name[high]);
    swap(age[i+1], age[high]);
    swap(gender[i+1], gender[high]);
    //swap(records[i + 1], records[high]);
    return (i + 1);
}

// Function to perform Quick Sort
void quickSort(int roll[],string name[],int age[],string gender[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(roll,name,age,gender, low, high);

        quickSort(roll,name,age,gender, low, pi - 1);
        quickSort(roll,name,age,gender, pi + 1, high);
    }
}

int main()
{
    int n;
    int v;
    string s;
    cout<<"Enter the number of students: ";
    cin>>n;
    int roll[n+5];
    int age[n+5];
    string name[n+5];
    string gender[n+5];
    cout<<"Enter the Rolls, Names, A ges and Gender"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        cin>>s;
        roll[i]=v; name[i]=s;
        cin>>v;
        cin>>s;
        age[i]=v; gender[i]=s;
    }
    quickSort(roll,name,age,gender,0,n-1);
    cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<roll[i]<<" "<<name[i]<<" "<<age[i]<<" "<<gender[i]<<endl;
    }
    return 0;
}
