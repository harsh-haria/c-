#include<iostream>
#include<vector>
using namespace std;

const int N = 100;
vector<int> adj[N];
bool vis[N];

 void dfs(int node){
    vis[node] = 1;
    cout<<node<<" ";
    for(auto i:adj[node]){
        if(!vis[i]){
            dfs(i);
        }
    }
 }

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){ //create
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<endl;
    for(int i=1;i<n+1;i++){ // printer
        cout << i<<" -> ";
        for(auto x:adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    dfs(1);
}