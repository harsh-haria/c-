#include <bits/stdc++.h>
using namespace std;

int subsetSumCount(int arr[], int SUM, int nos)
{
    int count = 0;
    vector<vector<int>> dp(nos + 1, vector<int>(SUM + 1, -1));
    for (int i = 0; i < SUM + 1; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i < nos + 1; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i < nos + 1; i++)
    {
        for (int j = 1; j < SUM + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[nos][SUM];
}

int main()
{
    int arr[] = {1, 1, 2, 3};
    int DIFF = 1;
    int nos = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (auto i : arr)
    {
        sum += i;
    }
    int sum1 = (DIFF + sum) / 2;
    int count = subsetSumCount(arr, sum1, nos);
    cout << "The array has " << count << " subsets with difference of " << DIFF << endl;
}