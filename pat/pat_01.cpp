#include <iostream>
using namespace std;

int main()
{
    int size, i, j, k, l;
    cout << "Enter the size of the pattern: ";
    cin >> size;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= i; j++)
        {
            ((i + j) % 2 == 0) ? cout << "1 " : cout << "0 ";
        }
        cout << endl;
    }
}