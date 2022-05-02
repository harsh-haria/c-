#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

map<int,int> m;
unordered_map<int,int> ump; //same things as map
int main(){
    m[8] = 2;
    m[1] = 5;
    m[4] = 9;
    m[6] = 0;
    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    for(auto i:m){
        cout<<i.first <<" "<<i.second<<endl;
    }
}