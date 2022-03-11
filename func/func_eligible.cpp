#include<iostream>
using namespace std;
void check(int num){ num>=18?(cout<<"You are eligible to vote"):(cout<<"you can vote after "<<(18-num)<<" years :)");}
int main(){ int age; cout<<"Enter your age "; cin>>age; check(age);}