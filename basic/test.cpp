#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;

int nthTermOfGP(int N, int A, int R) {
    if(N==0){
		return A;
	}
	return nthTermOfGP(N-1,A,R*A);
}

int main(){
    vector<char> s;
    s.push_back('s');
    s.push_back('t');
    s.push_back('r');
    s.push_back('i');
    s.push_back('n');
    s.push_back('g');
    for(auto i:s){
        cout<<i;
    }
    cout<<endl;
    // reverseString(s); //reverse
    for(auto i:s){
        cout<<i;
    }
    cout<<endl;
}