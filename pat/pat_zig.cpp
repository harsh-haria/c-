#include <iostream>
using namespace std;

int main()
{
    int size;
    int i, j, k, l;
    cout << "Enter the size of the pattern: ";
    cin >> size;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= size; j++)
        {
            (((i + j) % 4 == 0) || ((i == 2) && j % 4 == 0)) ? cout << "* " : cout << "  ";
        }
        cout << endl;
    }
}