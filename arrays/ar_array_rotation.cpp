#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        high--;
        low++;
    }
}

void rotateArr(int arr[], int d, int n)
{
    // code here
    d = d % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, n - d - 1);
    reverse(arr, n - d, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int dis = 3;
    int n = (sizeof(arr) / sizeof(arr[0]));
    rotateArr(arr, dis, n);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}