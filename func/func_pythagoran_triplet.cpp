#include<iostream>
using namespace std;

void py(int a,int b,int c){
    int x,y,z;
    int maxValue = max(a, max(b, c));
    if(maxValue==a){y=b;z=c;}else if(maxValue==b){y=a;z=c;}else{y=a;z=b;}
    (maxValue*maxValue ==y*y+z*z)?cout<<"Valid":cout<<"Invalid";
}

int main(){
    int a,b,c;
    cout<<"Enter the numbers: ";
    cin>>a>>b>>c;
    py(a,b,c);
    return 0;
}