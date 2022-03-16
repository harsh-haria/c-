/*
this is inclusion exclusion principle
it is just like venn diagram
a+b-c is the formula
*/
#include<iostream>
using namespace std;

int divisible(int n, int a,int b){
    int c1 =  n/a;      // gives no of elements divisible by 'a'
    int c2 = n/b;       // gives no of elements divisible by 'b'
    int c3 = n/(a*b);   // gives the no of elements divisible by both 'a' and 'b'
    return c1+c2-c3;
}

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b);
    return 0;
}
