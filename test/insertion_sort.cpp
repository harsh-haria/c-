#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n = 9;
    int arr[] = {9,6,5,0,8,2,7,1,3};
    for(auto i:arr){
        cout<<i<<" ";
    }cout<<endl;
    int i=0,j;
    while(i!=n){
        j = i+1;
        while(j>0 and arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        i++;
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
}