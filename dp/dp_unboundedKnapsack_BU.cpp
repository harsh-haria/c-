#include <bits/stdc++.h>
using namespace std;

int unboundedKnapsack(vector<int> arr, int capacity, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, -1));
    for (int i = 0; i < n + 1; i++)
    {
        dp[0][i] = 0;
    }
    for (int j = 0; j < capacity + 1; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < capacity + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j], arr[i - 1] + dp[i][j - arr[i - 1]]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][capacity];
}

int main()
{
    vector<int> arr = {1, 1, 3, 4};
    int capacity = 13;
    int n = arr.size();
    int answer = unboundedKnapsack(arr, capacity, n);
    cout << "Max profit in the knapsack is " << answer << endl;
}