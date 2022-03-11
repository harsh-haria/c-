#include<iostream>
using namespace std;

int main(){
    int size, i,j,k,l;
    cout<<"Enter the size of the rhombus";
    cin>>size;
    for(i=1;i<=size;i++){//forloop for lines
        for(j=size-i;j>=1;j--){//for loop for spaces
            cout<<" ";
        }
        for(k=1;k<=size;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}