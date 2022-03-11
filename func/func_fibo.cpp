#include <iostream>
using namespace std;

void fibo(int num)
{
    int x = 0;
    int y = 1;
    int nextterm = 0;
    for (int i = 1; i <= num; i++)
    {
        cout<<x<<" ";
        nextterm = x + y;
        x = y;
        y = nextterm;
    }
}

int main()
{
    int size = 0;
    cin >> size;
    fibo(size);
}