#include<iostream>
using namespace std;

class base{
    public:
        virtual void print(){ 
            //by adding virtual we are making sure that the derived's functions are printed rather than that of base
            //if we dont add it, compiler will get confused and straight away print base'function even if different pointer was passed;
            cout<<"Base's Print"<<endl;
        }
        virtual void display(){
            cout<<"Base's Display"<<endl;
        }
};

class derived: public base{
    public:
        void print(){
            cout<<"Derived's Print"<<endl;
        }
        void display(){
            cout<<"Derived's Display"<<endl;
        }
};

int main(){
    base *x;
    derived d;
    x = &d;
    x->print(); 
    x->display();
    return 0;
}