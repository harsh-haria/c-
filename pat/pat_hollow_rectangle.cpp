#include <iostream>
using namespace std;

int main()
{
    int rows, columns, i, j, flag = 0;
    cout << "Enter the rows and colums of the star pattern in Hollow rectangle ";
    cin >> rows >> columns;
    for (i = 1; i <= rows; i++)
    {
        flag = (i == 1 || i == rows) ? 1 : 0;
        for (j = 1; j <= columns; j++)
        {
            flag?(cout << "* "):((j == 1 || j == columns) ? cout << "* " : cout << "  ");
        }
        cout << endl;
    }
    return 0;
}