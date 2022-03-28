/* find the number of ways in which n friends can remain single or can be paired up. */
//create pairs of friends. either you can leave a person alone or pair him/her with a person in the group.
//for example we have a girl. either we can leave her single or we can pair her with a person(n-1).
//since after the pairing we will be left with n-2 people, we will call the function for n-2. 
//however while calling we need to multiply (n-1) with the function call as we have n-1 options for choosing.

#include<iostream>
using namespace std;

int pairthemup(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return (pairthemup(n-1)+ (pairthemup(n-2) * (n-1)));
}

int main(){
    cout<<pairthemup(4)<<endl;
    return 0;
}