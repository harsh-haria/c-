#include <bits/stdc++.h>
using namespace std;

int subsetSumCount(int arr[], int SUM, int nos, vector<vector<int>> &dp)
{
    if (SUM == 0)
    {
        return 1;
    }
    if (nos < 0)
    {
        return 0;
    }
    else if (dp[nos][SUM] != -1)
    {
        return dp[nos][SUM];
    }
    else if (arr[nos - 1] <= SUM)
    {
        return dp[nos][SUM] = subsetSumCount(arr, SUM - arr[nos - 1], nos - 1, dp) + subsetSumCount(arr, SUM, nos - 1, dp);
    }
    else
    {
        return dp[nos][SUM] = subsetSumCount(arr, SUM, nos - 1, dp);
    }
}

int main()
{
    int arr[] = {2, 3, 5, 8, 10};
    int SUM = 10;
    int nos = sizeof(arr) / sizeof(arr[0]);
    vector<vector<int>> dp(nos + 1, vector<int>(SUM + 1, -1));
    int count = subsetSumCount(arr, SUM, nos, dp);
    cout << "The array has " << count << " subsets!" << endl;
}