#include <iostream>
using namespace std;
int main()
{
    int size, i, j, k, l;
    cout << "Enter the number of rows: ";
    cin >> size;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}