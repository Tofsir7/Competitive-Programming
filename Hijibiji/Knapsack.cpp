#include<bits/stdc++.h>
using namespace std;
double knapsackGreedy(vector<int>& weights, vector<int>& values, int capacity)
{
    int n = weights.size();
    vector<double> valuePerWeight(n);
    //per unit value store kori
    for (int i = 0; i < n; i++)
    {
        valuePerWeight[i] =(double)(values[i]) / weights[i];
    }
    //per unit value onujayee sort kori
    sort(valuePerWeight.begin(), valuePerWeight.end(), greater<double>());
    double maxProfit = 0.0;
    for (int i = 0; i < n; i++)
    {
        //ei weight ta rakha jabe ki na check kori
        if (weights[i] <= capacity)
        {
            maxProfit += values[i];
            capacity -= weights[i];
        }
        else
        {
            //jototuku capacity ache tototuku fraction calculate kori
            maxProfit += valuePerWeight[i] * capacity;
            break;
        }
    }
    return maxProfit;
}
int main()
{
    vector<int> weights = {2, 3, 4, 5};
    vector<int> values = {3, 4, 5, 6};
    int capacity = 7;
    double maxProfit = knapsackGreedy(weights, values, capacity);
    cout << "Maximum Profit: " << maxProfit << endl;
    return 0;
}
