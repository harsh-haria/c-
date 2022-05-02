#include<iostream>
#include<vector>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e5+2, MOD = 1e9+7;

int main(){
    int n,m;
    cin>>n>>m;

    vvi adjm(n+1,vi(n+1,0)); 
    vi adj[100];

//first parameter is size of row, second of first is size of columns and second of second is initializing to 0 
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        adjm[x][y] = 1;
        adjm[y][x] = 1;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<"The Adjacency matrix of the above graph is given by: "<<endl;
    rep(i,1,n+1){//from one because we are not using adjm[0][x] or adjm[x][0]
        rep(j,1,n+1){//it will only be useful if we have a node 0 in the graph
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //now lets look at the adjecency list implementation of the Graph

    cout<<"Lets see how the adjacency list looks like: "<<endl;
    rep(i,1,n+1){
        cout<<i<<" -> ";
        for(auto x:adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}