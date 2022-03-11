#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr;
    aptr = &a;
    int **aaptr;
    aaptr = &aptr;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    cout<<aaptr<<endl;
    cout<<*aaptr<<endl;
    cout<<**aaptr<<endl;

    int arr[]={10,20,30,40};
    int *ptr;
    ptr = arr;
    for(int i=0;i<4;i++)
    {
        cout<<*ptr+i<<" ";
    }

    return 0;
}