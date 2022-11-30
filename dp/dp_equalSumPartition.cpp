#include <bits/stdc++.h>
using namespace std;

bool equalSumPartition(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum % 2 == 1)
    {
        return false;
    }
    sum = sum / 2;
    // since the sum is even we can split it in half and then use subsetSum to find the half and return the answer
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, 0));
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (j == 0)
            {
                dp[i][j] = true;
            }
            else if (i == 0)
            {
                if (j != 0)
                {
                    dp[i][j] = false;
                }
            }
            else if (j >= arr[i - 1])
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][sum];
}

int main()
{
    int arr[] = {2, 3, 7, 8, 10};
    int sum = 11;
    int n = sizeof(arr) / sizeof(arr[0]);
    bool ans = equalSumPartition(arr, n);
    if (ans)
    {
        cout << "Equal sum partition exists!";
    }
    else
    {
        cout << "Equal sum partition does not exists!";
    }
    return 0;
}