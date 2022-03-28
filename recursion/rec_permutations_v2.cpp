#include<bits/stdc++.h>
using namespace std;

//the numbers should be distinct
//time complexity is "N!"

vector< vector<int> > ans;

void permute(vector<int> &a, int idx){
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }

    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}

int main(){
    int n; cin>>n;
    vector <int> a(n); //creating a vector of size 'n' with name 'a'
    // int x[5] = {1,2,3,4,5};
    for(auto &i : a){   //taking inputs for a;
        cin>>i;
    }

    // for(auto &i : a){
    //     cout<<i;
    // }
    // cout<<endl<<"new"<<endl;
    // for(auto g : x){
    //     g+=1;
    // }
    // for(auto &g : x){ //auto declaration is necessary over here. //this way we can iterate rather than conventional for loop
    //     cout<<g<<" "; 
    // }
    //https://stackoverflow.com/questions/17032267/c11-range-based-for-loop-efficiency-const-auto-i-versus-auto-i
    //visit this link for declaration syntax

    permute(a,0);
    cout<<endl;
    for(auto v:ans){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}