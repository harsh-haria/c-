#include <bits/stdc++.h>
using namespace std;

int knapSack(int wt[], int val[], int W, int n)
{
    int dp[n + 1][W + 1] = {-1};
    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = 0;
    }
    for (int j = 0; j < W + 1; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            dp[i][j] = -1;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            if (j < wt[i - 1])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[n][W];
}

int main()
{
    int wt[] = {10, 20, 30};
    int val[] = {60, 100, 120};
    int W = 50;
    int maxProfit = knapSack(wt, val, W, sizeof(wt) / sizeof(wt[0]));
    cout << "Max profit: " << maxProfit << endl;
}