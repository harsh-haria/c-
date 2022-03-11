#include<iostream>
using namespace std;

int main(){
    int n;
    int ele;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int num[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }//input for array
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }//displaying the array
    cout<<endl;
    int temp;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-(i+1);j++){
            if((num[j]>num[j+1])&&j<n-1){
            temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
            }
        }
        for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
        }//displaying the array
        cout<<endl;
    }
    

}