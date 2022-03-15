//to find a unique number in an array where all numbers except one, are present thrice
//1,3,2,3,4,2,1,1,3,2
//create a additional array. this array will say the occurrence
//for 0th position in array: the elements who's 0th bit is set to 1 will increase it by 1;
//take each element of new array and perform modulo.
//display the ans of all elements in reverse and make it from binary to int.
#include<iostream>
#include<cmath>
using namespace std;
//1 3 2 3 4 2 1 1 3 2
//1 1 3 4 8 11 8 4 4 8 3 3 1
//11 12 8 4 11 15 11 8 12 8 12 4 4

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

string bi2dec(string s){
    int len = s.length();
    int mod = 0;
    int num = stoi(s);
    string newstr = "";
    while(num){
        mod = num%2;
        num/=2;
        newstr = to_string(mod) + newstr; 
    }
    return newstr;
}

int main(){
    int n;
    cin>>n;
    int b[n] = {0};
    // int a[]= {1,3,2,3,4,2,1,1,3,2};
    int a[n] = {0};
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi = max(maxi,a[i]);
    }
    string boundary = bi2dec(to_string(maxi));
    cout<<"Boundry: "<<boundary<<endl;
    int flag = 0;
    int count=0;
    for(int i=0;i<boundary.length();i++){
        if(flag==0){
            if(boundary[i]=='1'){
                flag=1;
                count++;
                // cout<<"bound: "<<boundary[i]<<" "<<count<<endl;
                continue;
            }
        }
        if(flag==1){
            count++;
        }
    }
    cout<<"count: "<<count<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<count;j++){
            if((a[i] & (1<<j))!=0){
                b[j]++;
            }
        }
    }
    // for(int i=0;i<10;i++){
    //     cout<<b[i]<<" ";
    // }
    string str = "";
    for(int i=0;i<count;i++){
        str = to_string(b[i]%3) + str;
    }
    cout<<binary_2_dec(str);
    return 0;
}