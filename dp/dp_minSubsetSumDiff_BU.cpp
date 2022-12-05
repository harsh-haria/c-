#include <bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> arr, int sum, vector<vector<bool>> &dp)
{
    for (int i = 0; i < sum + 1; i++)
    {
        dp[0][i] = false;
    }
    for (int j = 0; j < arr.size() + 1; j++)
    {
        dp[j][0] = true;
    }
    for (int i = 1; i < arr.size() + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
}

int main()
{
    // vector<int> arr = {1, 6, 5, 11};
    // vector<int> arr = {2, 7, 4, 1, 8, 1};
    vector<int> arr = {31, 26, 33, 21, 40};

    int totalSum = 0;
    int halfSum = 0;
    for (auto i : arr)
    {
        totalSum += i;
    }

    if (totalSum % 2 == 1)
    {
        halfSum = totalSum / 2 + 1;
    }
    else
    {
        halfSum /= 2;
    }

    vector<vector<bool>> dp(arr.size() + 1, vector<bool>(totalSum + 1, 0));
    subsetSum(arr, totalSum, dp);
    vector<int> answerVector;
    for (int i = 0; i < (totalSum + 1) / 2; i++)
    {
        if (dp[arr.size()][i] == true)
        {
            answerVector.push_back(i);
        }
    }
    int mini = INT_MAX;
    for (auto i : answerVector)
    {
        mini = min(mini, totalSum - (2 * i));
    }
    cout << "The minimum subset sum difference is " << mini << endl;
    return 0;
}
