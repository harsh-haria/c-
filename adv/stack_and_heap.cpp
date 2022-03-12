#include<iostream>
using namespace std;

int main(){
    int a=10;                               //store in stack
    int *p = new int();                     //allocating memory in heap
    *p = 10;
    cout<<*p;
    delete(p);                              //dealocating memory from heap
    p = new int[4];                         //p will point to a memory location in heap that contains the array
    delete []p;                             //dealocating memory alloted for array
    p = NULL;                               //avoiding leak(might happen in servers bcz they run indefinelty and the program will not close so nothing from stack gets removed)
    return 0;
}