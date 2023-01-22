#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n);

int main()
{
    int arr[] = {1, 50, -22, 0, 11, -5, -8, 65};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void rearrange(int arr[], int n)
{
    // code here
    int start = 0;
    int end = n - 1;
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[end--] = arr[i];
        }
        else
        {
            temp[start++] = arr[i];
        }
    }
    // for(int i=0; i<n; i++){
    //     cout<<temp[i]<<" ";
    // }
    // cout<<endl;
    bool pos = true;
    start = 0;
    end = n - 1;
    int startBreak = -1;
    for (int i = 0; i < n; i++)
    {
        if (temp[i] < 0)
        {
            startBreak = i - 1;
            break;
        }
        else
        {
            startBreak++;
        }
    }
    if (startBreak == -1 || startBreak == n)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (start > end)
        {
            break;
        }
        if (pos)
        {
            arr[i] = temp[start++];
        }
        else
        {
            arr[i] = temp[end--];
        }
        if (start == startBreak + 1)
        {
            pos = false;
        }
        else if (end == startBreak)
        {
            pos = true;
        }
        else
        {
            pos = !pos;
        }
    }
}