#include<bits/stdc++.h>
using namespace std;
int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            if (wt[i - 1] <= j) {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][W];
}
int main() {
    int W = 7;
    vector<int> wt = {3, 4, 2, 5};
    vector<int> val = {4, 5, 3, 6};
    int n = wt.size();
    int maxVal = knapsack(W, wt, val, n);
    cout << "Maximum value: " << maxVal << endl;
    return 0;
}
