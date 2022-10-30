#include <bits/stdc++.h>
using namespace std;

int main()
{
    // const int x = 5;
    // x = 6; //will throw error
    int num1 = 5;
    int num2 = 10;
    int num3 = 15;
    const int *pointer1 = &num1; // pointer1 points to a “const int” value, so this is a pointer to a const value.
    // *pointer1 = 7; // this won't work
    pointer1 = &num2; // this will work
    cout << *pointer1 << endl;

    int *const pointer2 = &num2; // pointer2 points to an “int”, so this is a const pointer to a non-const value.
    *pointer2 = 12;              // this will work
    // pointer2 = &num1; // this won't work
    cout << *pointer2 << endl;

    const int *const pointer3 = &num3; // pointer3 points to a “const int” value, so this is a const pointer to a const value.
    // *pointer3 = 16;                 // this won't work
    // *pointer3 = &num2;                 // this won't work either
    cout << *pointer3 << endl;
    return 0;
}