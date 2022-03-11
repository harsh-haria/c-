#include<iostream>
using namespace std;

void func_num_swap(int x,int y){
    int temp=0; 
    temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl;
}

int main(){
    int a,b,i=0,j=0;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    func_num_swap(a,b);
}