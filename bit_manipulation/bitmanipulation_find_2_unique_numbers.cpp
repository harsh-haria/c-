//find 2 unique numbers in array using bit manipulation
//first xor all the numbers
//we will get a number. store it(x). now wherever we get rightmost set bit in that number. remember the position of it.
//now in array whichever digit has set bits at that position perform xor on all those elements. store it(y). 
//here we will get our first number
//finally we need to perfrom exor on (x) (y)
//this will give us the second number.
#include<iostream>
using namespace std;

string find_elements(int a[],int n){
    int xoro1=0;
    int xoro2=0;
    int setbit = 0;
    int newarr[n];
    for(int i=0;i<n;i++){
        xoro1 = xoro1 ^ a[i];
    }
    for(int i=0;i<4;i++){
        if((xoro1 & (1<<i))!=0){
            cout<<"the setbit position is: "<<i<<endl;
            setbit = i;
        }
    }
    for(int i=0;i<n;i++){
        if((a[i] & (1<<setbit))!=0){
            xoro2 = xoro2 ^ a[i];
        }
    }
    cout<<endl<<"one of the elements is: "<<xoro2<<endl;
    cout<<"the other element is : "<<(xoro1 ^ xoro2)<<endl;

    return "\n";
}

int main(){
    int arr[] = {2,4,6,7,4,5,6,2};
    cout<<find_elements(arr,8);
    return 0;
}