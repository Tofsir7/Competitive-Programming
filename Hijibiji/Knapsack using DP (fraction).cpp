#include<bits/stdc++.h>
using namespace std;
double knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    vector<vector<double>> dp(n + 1, vector<double>(W + 1, 0));
    vector<double>unit(n+1,0);
    for(int i=0;i<n;i++)
    {
        unit[i]=(double)val[i]/wt[i];
    }
    sort(unit.begin(),unit.end(), greater<double>());
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            if (wt[i - 1] <= j) {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            } else {
                dp[i][j] = unit[i-1]*j;
            }
        }
    }
    return dp[n][W];
}
int main() {
    int W = 7; // Knapsack capacity
    vector<int> wt = {3, 4, 2, 5}; // Item weights
    vector<int> val = {4, 5, 3, 6}; // Item values
    int n = wt.size(); // Number of items
    double maxVal = knapsack(W, wt, val, n);
    cout << "Maximum value: " << maxVal << endl;
    return 0;
}
