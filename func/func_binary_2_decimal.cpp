#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    string s;
    cin>>s;
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
        
    cout<<sum;
    // char p = s[0];
    // cout<<(int)p<<endl;
    

}