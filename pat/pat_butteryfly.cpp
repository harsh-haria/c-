#include <iostream>
using namespace std;

int main()
{
    int i, j, k, l, m;
    int a, b, c, d, e;
    int size;
    cout << "Enter the size of the butterfly: ";
    cin >> size;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        } // for loop for stars
        for (k = (size - i) * 2; k >= 1; k -= 2)
        {
            cout << "    ";
        } // for loop for space
        for (m = 1; m <= i; m++)
        {
            cout << "* ";
        } // for loop for remainng stars
        // cout<<size;
        cout << endl;
    }
    for (a = size; a >= 1; a--)
    {
        for (b = a; b >= 1; b--)
        {
            cout << "* ";
        }
        for (c = 1; c <= (size - a) * 2; c += 2)
        {
            cout << "    ";
        }
        for (e = a; e >= 1; e--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}