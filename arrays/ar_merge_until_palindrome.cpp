/*
    Find minimum number of merge operations to make an array palindrome
    Given an array of positive integers.
    We need to make the given array a ‘Palindrome’.
    The only allowed operation is”merging” (of two adjacent elements).
    Merging two adjacent elements means replacing them with their sum.
    The task is to find the minimum number of merge operations required to
        make the given array a ‘Palindrome’.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int i = 0, j = n - 1;
    int ans = 0;
    while (i != j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else if (arr[i] < arr[j])
        {
            arr[i + 1] = arr[i] + arr[i + 1];
            i++;
            ans++;
        }
        else
        {
            arr[j - 1] = arr[j] + arr[j - 1];
            j--;
            ans++;
        }
    }
    cout << ans << endl;
}