#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "\nEnter a charater for the input" << endl;
    cin >> a;
    cout<<"the value of the variable in ASCII is: "<<float(a)<<endl;
    switch (a)
    {
    case 'a':
        cout << "Input was 'a' \n" << endl;
        break;

    case 'b':
        cout << "Input was 'b' \n" << endl;
        break;

    default:
        cout << "Input Invalid\n" << endl;
        break;
    }
}