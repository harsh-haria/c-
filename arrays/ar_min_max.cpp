#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    int minNo=INT_MAX;
    int maxNo=INT_MIN;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n] = {0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        maxNo = max(maxNo,arr[i]);
        minNo = min(minNo,arr[i]);
    }
    cout<<endl<<maxNo<<" "<<minNo<<endl;
return 0;
}