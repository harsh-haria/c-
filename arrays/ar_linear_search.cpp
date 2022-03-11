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
    cout<<endl<<"Enter the element to be searched: ";
    cin>>ele;
    int c=0;
    for(int i=0;i<n;i++){
        c++;
        if(ele==num[i]){
            cout<<i+1;
            break;
        }
        else{
            cout<<"";
        }
        // (ele==num[i])?cout<<i+1:cout<<"";
    }
    cout<<endl<<"The value of c is: "<<c;
    return 0;
}