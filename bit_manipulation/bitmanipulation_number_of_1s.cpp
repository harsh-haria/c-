//find the number of 1's in the number
//use the same method as we used in the power of 2
//n = n && n-1 keep doing this until n becomes 0(will happen when the number is divisible by 2)
//count number of times n = n && n-1 statement was executed and print the number
// this number will be number of 1's in the number;
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    while(n!=0){
        // cout<<n<<" "<<n-1<<" "<<i<<endl;
        n = n & (n-1);
        i++;
    }
    cout<<"Number of 1's: "<<i;
}