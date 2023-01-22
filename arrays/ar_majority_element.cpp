#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n)
{

    // your code here
    int count = 1;
    int maj_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[maj_index] == arr[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    int hash = (n / 2) + 1;
    int eleCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[maj_index])
        {
            eleCount++;
        }
    }
    if (eleCount >= hash)
    {
        return arr[maj_index];
    }
    return -1;
    // return arr[major];
}

int main()
{
    int arr[] = {8, 3, 4, 8, 8, 8, 4, 8, 4, 8, 8, 0, 8, 8};
    int n = (sizeof(arr) / sizeof(arr[0]));
    cout << majorityElement(arr, n) << endl;
    return 1;
}