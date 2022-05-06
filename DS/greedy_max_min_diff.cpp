#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    int mx = 0;
    int mn = 0;
    for(auto &i:a){
        cin>>i;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n/2;i++){
        mx+= a[i+n/2] - a[i];
        mn+= a[2*i+1] - a[2*i];
    }
    cout<<mn<<" "<<mx<<endl;
}