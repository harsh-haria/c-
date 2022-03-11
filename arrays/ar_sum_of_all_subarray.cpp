#include<iostream>
//#include<stdio.h>
using namespace std;

int main(){

    int n,ele;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int num[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }//input for array
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=num[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}