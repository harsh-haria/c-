#include <iostream>
using namespace std;

int startu, endu;

int binary(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    int c = 0;
    while (s <= e)
    {
        c++;
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout<<"the value of c is: "<<c;
    return 0;
}

int main()
{
    int n;
    int ele;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int num[n];
    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl
         << "Enter the element to be searched: ";
    cin >> ele;
    startu = 0;
    endu = n - 1;
    cout << binary(num, n, ele);
}