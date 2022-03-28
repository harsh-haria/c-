#include<bits/stdc++.h>
using namespace std;

//the elements should be distint
//the program uses stl(standard template library)

vector<vector<int>> x;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    
    sort(a.begin(),a.end());
    do{
        x.push_back(a);
    }
    while(next_permutation(a.begin(),a.end()));
    
    for(auto p:x){
        for(auto q:p){
            cout<<q;
        }
        cout<<endl;
    }
    return 0;
}