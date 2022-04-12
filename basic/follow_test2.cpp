#include<iostream>
#include "follow_test1.cpp"
using namespace std;

int main(){
    int x = 5;
    int y = 5;
    auto z = 0;
    z = addItPlease(x,y);
    cout<<z<<endl;
    z = subItPlease(x,y);
    cout<<z<<endl;
    z = mulItPlease(x,y);
    cout<<z<<endl;
    z = divItPlease(x,y);
    cout<<z<<endl;
    return 0;
}