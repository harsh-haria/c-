//strictly increasing
#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
    if(n==1){
        return 1;
    }
    return ((arr[0]<arr[1]) && sorted(arr+1,n-1));
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sorted(a,n)<<endl;

}