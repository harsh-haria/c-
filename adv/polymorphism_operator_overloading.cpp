#include<iostream>
using namespace std;

class Complex{
        int real,imag;
    public:
        Complex(int r=0, int i=0){ //by adding r=0 and i=0 we kind of created a default constructor
            real = r;
            imag = i;
        }

        Complex operator + (Complex const &obj){//doubt: how does c1 and c2 go in this function. i mean how does the compiler decide which one to take as original ans which one as object
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }

        void display(){
            cout<<real<<" + i"<<imag<<endl;
        }
};

int main(){

    Complex c1(12,7);
    Complex c2(6,7);
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}