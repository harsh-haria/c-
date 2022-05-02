#include<iostream>
#include<queue>
#include<vector>
using namespace std;

const int N = 100;
vector<int> adj[N];

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
    queue<int> q;
    bool vis[N];
    for(auto &i:vis){
        i=0;
    }
    cout<<endl;
    q.push(1);
    vis[1] = 1;
    for(int i=1;i<n+1;i++){
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for(auto j:adj[x]){
            if(!vis[j]){
                vis[j]=1;
                q.push(j);
            }
        }
    }
}