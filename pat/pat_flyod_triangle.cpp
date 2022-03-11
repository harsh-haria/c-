#include<iostream>
using namespace std;

int main(){
    int rows,i,j,count=1;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}