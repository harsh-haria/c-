#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[], int sum, int n)
{
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
    bool ans = subsetSum(arr, sum, n);
    if (ans)
        cout << "Subset sum of " << sum << " exists!";
    else
        cout << "Subset sum of " << sum << " doesn't exists!";
    return 0;
}