#include <iostream>
using namespace std;

int main()
{
    int size, i, j;
    cout << "Enter the number of rows: ";
    cin >> size;
    for (i = size; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}