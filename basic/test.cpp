#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int a[] = {1,4,7,2,5,9,1};
    string s = "harsh";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    cout<<'a'<<" "<<(int)'a'-96<<endl;
    cout<<'z'<<" "<<(char)'z'-96;
}