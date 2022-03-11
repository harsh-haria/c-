#include<iostream>
using namespace std;

int main()
{
    int n=8;
    int a[] = {2,4,7,11,14,16,20,21};
    int k = 31;

    int st=0;
    int en=n-1;

    while(st!=en)
    {
        if((a[st]+a[en])<k)
        {
            st++;
        }
        else if((a[st]+a[en])>k)
        {
            en--;
        }
        else
        {
            cout<<st<<" "<<en<<endl;
            break;
        }
    }
}