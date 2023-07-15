#include<bits/stdc++.h>
using namespace std;
int knapsack(int W, vector<int>& wt, vector<int>& val)
{
    int n = wt.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; i++)// value koyta nibo
    {
        for (int j = 1; j <= W; j++)// capacity koto
        {
            if (wt[i - 1] <= j)// i=2 j=7
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
                //value[i-1] means (i-1)th elemnt ta nilam
                // [j - wt[i - 1] means (i-1)th element newar por koto capacity baki ache
                // dp[i - 1][j - wt[i - 1]] means baki capacity er jonno koto newa jeto
            }

            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][W];
}
int main()
{
    int capacity = 9;
    vector<int> wt = {3, 4, 2, 5};
    vector<int> val = {4, 5, 3, 6};
    int maxVal = knapsack(capacity, wt, val);
    cout << "Maximum value: " << maxVal << endl;
    return 0;
}
