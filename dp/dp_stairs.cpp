/*
Leetcode #70 (EASY)

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n)
{
    if (n <= 2)
        return n;
    int prev = 2, prev2 = 1, res;
    for (int i = 3; i <= n; i++)
    {
        res = prev + prev2;
        prev2 = prev;
        prev = res;
    }
    return res;
}

int main()
{
    int noOfStairs = 45;
    cout << "Ways to climb " << noOfStairs << " is: " << climbStairs(noOfStairs) << endl;
    return 0;
}