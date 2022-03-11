#include <iostream>
using namespace std;

int main()
{
    int size;
    int i, j, k, l;
    cout << "Enter the size of palindrome pyramid: ";
    cin >> size;
    for (i = 1; i <= size; i++)
    {
        for (j = size - i; j >= 1; j--)
        {
            cout << "  ";
        } // for the spaces

        for (k = i; k >= 1; k--)
        {
            cout << k << " ";
        } // for the inverted pattern

        for (k = 1; k <= i; k++)
        {
            if (k == 1)
            {
                continue;
            }
            cout << k << " ";
        } // for the correct pattern
        
        cout << endl;
    }
}