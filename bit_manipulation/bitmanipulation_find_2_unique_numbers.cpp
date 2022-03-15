//find 2 unique numbers in array using bit manipulation
//first xor all the numbers
//we will get a number. store it(x). now wherever we get set bit in that number. remember the position of it.
//now in array whatever digit has set bits at that position perform xor on all those elements. store it(y). 
//here we will get our first number
//finally we need to perfrom exor on (x) (y)
//this will give us the second number.
#include<iostream>
using namespace std;

string find_elements(int a[],int n){
    
}

int main(){
    int arr[] = {2,4,6,7,4,5,6,2};
    cout<<find_elements(arr,7);
    return 0;
}