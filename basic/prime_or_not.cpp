#include<iostream>
using namespace std;

int main(){
    int i=0,y=0,x=0;
    cout<<"Enter the number"<<endl;
    cin>>i;
    for(x=2; x<i; x++){
        if(i%x==0){
            cout<<x<<" "<<i%x<<endl;
            //break;
            y=1;
        }
    }
    if(y==1){
        cout << "not prime" << endl;
    }
    else{
        cout<<"prime"<<endl;
    }
    return 0;
}