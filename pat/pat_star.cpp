#include <iostream>
using namespace std;

int main()
{
    int size;
    int a, b, c, d;
    int i, j, k, l;
    cout << "Enter the size of star: ";
    cin >> size;
    for (a = 1; a <= size; a++)
    {
        for (b = (size - a); b >= 1; b--)
        {
            cout << "  ";
        } // spaces before stars

        for (c = 1; c <= a; c++)
        {
            cout << "* ";
        } // for the main stars

        for (d = 1; d <= a; d++)
        {
            d == 1 ? cout << "" : cout << "* ";
        } // for remainng stars

        // cout<<"X";
        cout << endl;
    }
    for (i = size; i >= 1; i--)
    {
        for (j = 1; j <= size - i; j++)
        {
            cout << "  ";
        }
        for (k = i; k >= 1; k--)
        {
            cout << "* ";
        }
        for (l = i; l >= 1; l--)
        {
            l == 1 ? cout << " " : cout << "* ";
        }
        cout << endl;
    }
}