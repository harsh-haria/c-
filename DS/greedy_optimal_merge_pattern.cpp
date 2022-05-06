#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
int main(){
    int n;cin>>n;
    vi a(n);
    int cost = 0;
    priority_queue<int,vector<int>,greater<int>> minheap;
    rep(i,0,n){
        int e;cin>>e;
        minheap.push(e);
    }
    while(minheap.size()>1){
        int x = minheap.top();
        minheap.pop();
        int y = minheap.top();
        minheap.pop();
        cost += x + y;
        minheap.push(x + y);
    }
    cout<<cost<<endl;
}