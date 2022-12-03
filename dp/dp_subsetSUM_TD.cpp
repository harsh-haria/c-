#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[], int sum, int n, vector<vector<bool>> &dp)
{
    if (sum == 0)
    {
        return dp[n][sum] = true;
    }
    if (n < 0)
    {
        return false;
    }
    if (dp[n][sum] != 0)
    {
        return dp[n][sum];
    }
    else if (arr[n - 1] <= sum)
    {
        return dp[n][sum] = subsetSum(arr, sum - arr[n - 1], n - 1, dp) || subsetSum(arr, sum, n - 1, dp);
    }
    else
    {
        return dp[n][sum] = subsetSum(arr, sum, n - 1, dp);
    }
}

int main()
{
    int arr[] = {3, 34, 4, 12, 5, 2};
    int sum = 30;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, 0));
    bool ans = subsetSum(arr, sum, n, dp);
    if (ans)
        cout << "Subset sum of " << sum << " exists!";
    else
        cout << "Subset sum of " << sum << " doesn't exists!";
    return 0;
}