#include<iostream>
using namespace std;

//compile time polymorphism has two types
//one is function overloading and second is operator overloading

class overloaded{
    public:
        void fun(){
            cout<<"this is a function without an argument :)"<<endl;
        }
        void fun(int n){
            cout<<"this is a function with a integer argument with input: "<<n<<endl;
        }
        void fun(string s){
            cout<<"this is a function with a string input and the string was: "<<s<<endl;
        }
};

int main(){
    overloaded x;
    x.fun();
    x.fun(69);
    x.fun("69 is my fav number");
}