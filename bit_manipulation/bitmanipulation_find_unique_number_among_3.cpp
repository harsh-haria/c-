//to find a unique number in an array where all numbers except one, are present thrice
//1,3,2,3,4,2,1,1,3,2
//create a additional array. this array will say the occurrence
//for 0th position in array: the elements who's 0th bit is set to 1 will increase it by 1;
#include<iostream>
#include<cmath>
using namespace std;

int binary_2_dec(string s){
    int sum=0;
    int power=0;
    int len = s.length();
    // cout<<len<<endl;
    while(len>0){
        char p = s[len-1];
        // (int)p==48?cout<<48<<" ":cout<<49<<" ";
        if((int)p==48){
            sum += 0;
        }
        if((int)p==49){
            sum += pow(2,power);
        }
        power++;
        len--;
    }
        
    return sum;
}

int main(){
    int b[10] = {0};
    int a[]= {1,3,2,3,5,2,1,1,3,2};

    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            if((a[i] & (1<<j))!=0){
                b[j]++;
            }
        }
    }
    // for(int i=0;i<10;i++){
    //     cout<<b[i]<<" ";
    // }
    string str = "";
    for(int i=0;i<3;i++){
        str = to_string(b[i]%3) + str;
    }
    cout<<binary_2_dec(str);
    return 0;
}