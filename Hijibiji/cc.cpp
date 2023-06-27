#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> powerSet(vector<int>& set)
{
    vector<vector<int>> result;
    int n = set.size();
    int subsets = 1 << n; // Calculate the number of subsets (2^n)

    for (int i = 0; i < subsets; ++i)
    {
        vector<int> subset;
        for (int j = 0; j < n; ++j)
        {
                            cout<<(1<<3)<<" ";
            if ((i & (1 << j)) != 0)
            {
                subset.push_back(set[j]); // Include set[j] in the subset
            }
        }
        result.push_back(subset);
    }

    return result;
}

int main()
{
    vector<int> set = {1, 2, 3};
    cout << "Power set:\n";

    vector<vector<int>> subsets = powerSet(set);

    for (auto& subset : subsets)
    {
        cout << "{ ";
        for (auto& element : subset)
        {
            cout << element << " ";
        }
        cout << "}\n";
    }

    return 0;
}
