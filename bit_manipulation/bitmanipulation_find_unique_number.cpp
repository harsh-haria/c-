//find a unique number in the array of numbers where each element is repeated twice except 1.
//the basic idea is that we can exor all the elements on by one and at the end we will have our unique number
#include<iostream>
using namespace std;

int unique(int a[],int n){
    int xoro=0;
    for(int i = 0;i < n;i++){
        xoro = xoro ^ a[i];
    }
    return xoro;
}

int main(){
    int arr[]={2,4,6,8,4,6,2};
    int x = unique(arr,7);
    cout<<x;
}