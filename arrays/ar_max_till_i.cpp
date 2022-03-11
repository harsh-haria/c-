#include<iostream>
using namespace std;

int main(){
    int n;
    int ele;
    
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int num[n];
    int num2[n];
    
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }//input for array

    
    // cout<<"Enter the i'th element: ";
    // cin>>ith;

        // 
        // for(int i=0;i<n;i++){
        //     int ith=INT_MIN;
        //     for(int j=0;j<=i;j++){
        //         ith= max(ith,num[j]);
        //     }
        //     num2[i]=ith;
        // }
        // //time complecity is O(n^2)

        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            
            mx = max(mx,num[i]);
            cout<<mx<<" ";
        }//time complexity O(n).


    // for(int i=0;i<n;i++){
    //     cout<<num2[i]<<" ";
    // }//displaying the array
}
