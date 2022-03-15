//print the subarrays with the help of bit manipulation
//use the get bit method of the bit manipulation
//there will be 2 loops 
//first loop will run from 0 to 2^n
//second loop will run from 0 to n
//basically print all the elements where we get 1 as a set bit
#include<iostream>
using namespace std;

void print_subarrays(int s[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<(char)s[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int a[] = {'a','b','c','d'};
    print_subarrays(a,4);
    return 0; 
}