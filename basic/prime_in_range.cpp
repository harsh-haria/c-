#include <iostream>
using namespace std;

int main()
{
    int upper_range, lower_range, mod_variable, temp_number, x, i;
    cout << "Enter the starting of the Range\n";
    cin >> lower_range;
    cout << "Enter the ending of the Range\n";
    cin >> upper_range;
    for (x = lower_range; x <= upper_range; x++)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                break;
            }
        }
        if (i == x)
        {
            cout << x << endl;
        }
    }
}
