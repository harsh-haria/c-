/*
    has time complexity of O( loglog(n) ) in best case and O(n) in worst case.
*/
#include<iostream>
using namespace std;

int interpolation(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int pos;
    while(start<=end and key>=arr[start] and key<=arr[end]){
        pos = start + ( ( (double)(end-start) / (arr[end]-arr[start] ) ) * (key-arr[start]));
        if(arr[pos] == key){
            return pos;
        }
        else if(arr[pos]<key){
            start = pos + 1;
        }
        else{
            end = pos - 1;
        }
    }
    return -1;
}

int main(){
    int n = 9;
    int key = 40;
    int a[] = {2, 3, 4, 10, 40, 50, 60, 80, 100};
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;
    int x = interpolation(a,n,key);
    cout<<x<<endl;
    // return x;
}