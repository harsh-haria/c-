#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int n; cin>>n;
    vector<int> a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int cash;cin>>cash;
    int ans = 0;
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<n;i++){
        ans += cash/a[i];
        cash -= cash/a[i] * a[i];
    }
    cout<<ans<<endl;
}