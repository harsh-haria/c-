#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(auto i:v){
        cout<<i<<" ";
    }//1 2 3
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }//1 2 3
    cout<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }//1 2 3
    cout<<endl;

    v.pop_back(); //1 2

    for(auto i:v){
        cout<<i<<" ";
    }//1 2 
    cout<<endl;
    vector<int> v2(3,50); //here we are defining the vector v2 will have 3 elements, all of them will be 50
    for(auto i:v2){
        cout<<i<<" ";
    }//50 50 50 

    swap(v,v2); // swapes values from v to v2 and vice-versa

    cout<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }// 50 50 50
    cout<<endl;
    for(auto i:v2){
        cout<<i<<" ";
    }//1 2
    cout<<endl;
    v2.push_back(6);
    v2.push_back(0);
    v2.push_back(8);
    for(auto i:v2){
        cout<<i<<" ";
    }// 1 2 6 0 8
    cout<<endl;
    sort(v2.begin(),v2.end());
    for(auto i:v2){
        cout<<i<<" ";
    }//0 1 2 6 8
    cout<<endl;
}