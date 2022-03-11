#include <iostream>
//#include <climits>
using namespace std;

int main()
{
    int max_candies;
    int kids;
    int maxC = INT_MIN;

    cout << "Enter the number of kids: ";
    cin >> kids;

    cout << "Enter the number of candies each kid has: ";
    int candies[kids];

    for (int i = 0; i < kids; i++)
    {
        cin >> candies[i];
    } // input for candies with each kid

    cout << endl << "Enter the max number of candies: ";
    cin >> max_candies;

    for (int i = 0; i < kids; i++)
    {
        maxC = max(maxC, candies[i]);
    } // max element

    for (int i = 0; i < kids; i++)
    {
        ((candies[i] + max_candies) >= maxC) ? cout << "True " : cout << "False ";
    } // for printing true or false

    return 0;
}