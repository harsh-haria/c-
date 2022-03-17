// refer 15.2 for explanation hehehe 
//can also be done by prime factorization however euclid algo is much faster
#include<iostream>
using namespace std;

int gcd2(int a , int b){
    int x=0;
    while(b!=0){
        x = a % b;
        a = b;
        b = x;
        cout<<a<<" "<<b<<" "<<x<<endl;
    }
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd2(a,b);
}