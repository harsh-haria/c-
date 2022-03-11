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

    for(int i=1;i<n;i++){
        int current = num[i];
        int j = i-1;
        while(j>=0 && num[j]>current){
            num[j+1]=num[j];
            j--;
        }
        num[j+1]= current;

        for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
        }//displaying the array
        cout<<endl;

    }

    

}