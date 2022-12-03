/*
    Time complexity: O(noItems*Capacity)
    Space complexity: O(noItems*Capacity) + O(noItems)
*/
#include <bits/stdc++.h>
using namespace std;

int knapSackRecFunc(int capacity, int weight[], int items[], int i, int **dp)
{
    if (i < 0)
    {
        return 0;
    }
    if (dp[i][capacity] != -1)
    {
        return dp[i][capacity];
    }
    if (weight[i] > capacity)
    {
        dp[i][capacity] = knapSackRecFunc(capacity, weight, items, i - 1, dp);
        return dp[i][capacity];
    }
    else
    {
        dp[i][capacity] = max(items[i] + knapSackRecFunc(capacity - weight[i], weight, items, i - 1, dp), knapSackRecFunc(capacity, weight, items, i - 1, dp));
        return dp[i][capacity];
    }
}

int knapSackProg(int capacity, int weight[], int items[], int n)
{
    int **dp;
    dp = new int *[n];
    for (int i = 0; i < n; i++)
    {
        dp[i] = new int[capacity + 1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < capacity + 1; j++)
        {
            dp[i][j] = -1;
        }
    }
    return knapSackRecFunc(capacity, weight, items, n - 1, dp);
}

int main()
{
    int items[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int capacity = 50;
    int n = sizeof(items) / sizeof(items[0]);
    cout << knapSackProg(capacity, weight, items, n);
    return 0;
}
