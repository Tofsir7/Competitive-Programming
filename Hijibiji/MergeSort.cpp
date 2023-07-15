#include <iostream>
using namespace std;
void Merge(int a[], int lb, int ub, int mid)
{
    int i, j, k, temp[ub-lb+1];
    i = lb;
    k = 0;
    j = mid + 1;
    while (i <= mid && j <= ub)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = a[j];
            k++;
            j++;
        }
    }
// Insert all the remaining values from i to mid into temp[].
    while (i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
// Insert all the remaining values from j to high into temp[].
    while (j <= ub)
    {
        temp[k] = a[j];
        k++;
        j++;
    }
// Assign sorted data stored in temp[] to a[].
    for (i = lb; i <= ub; i++)
    {
        a[i] = temp[i-lb];
    }
    return;
}
void MergeSort(int a[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid=(lb+ub)/2;
        MergeSort(a, lb, mid);
        MergeSort(a, mid+1, ub);
        // Merge them to get sorted output.
        Merge(a, lb, ub, mid);
    }
    return;
}
int main()
{
    int n, i;
    cout<<"\nEnter the number of element : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements are:"<<endl;
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    MergeSort(a, 0, n-1);
    cout<<"\nSorted Data ";
    for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
    return 0;
}
