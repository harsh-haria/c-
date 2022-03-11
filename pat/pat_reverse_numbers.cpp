#include <iostream>
using namespace std;

int main()
{
    int size;
    int i, j, k, l;
    cout << "enter the size of the reverse pyramid: ";
    cin >> size;
    for (i = 1; i <= size; i++)
    {
        for (j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}