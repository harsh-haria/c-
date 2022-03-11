#include<iostream>
using namespace std;

int main(){
    int size,i,j,k,l;
    cout<<"Enter the size of the pyramid: ";
    cin>>size;
    for(i=1;i<=size;i++){
        for(j=size-i;j>=1;j--){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}