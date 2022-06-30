#include<bits/stdc++.h>
using namespace std;

class DSU{
    int* parent;
    int* rank;
    public:

    DSU(int v){
        parent = new int[v];
        rank = new int[v];
        for(int i=0; i<v; i++){
            parent[i] = -1;
            rank[i] = 1;
        }
    }

    int find(int x){
        if(parent[x]==-1){
            return x;
        }
        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y){
        int i = find(x);
        int j = find(y);
        if(i!=j){
            if(rank[i]<rank[j]){
                parent[i] = j;
                rank[j]+=rank[i];
            }
            else{
                parent[j] = i;
                rank[i]+=rank[j];
            }
        }
    }
};

class Graph{
    int v;
    vector<vector<int>> edgeList;
    public:
        Graph(int V){
            v = V;
        }

        void addEdge(int w, int x, int y){
            edgeList.push_back({w,x,y});
        }

        void kruskalMst(){
            int ans;
            DSU s(v);
            sort(edgeList.begin(),edgeList.end());
            for(auto edge:edgeList){
                int w = edge[0];
                int x = edge[1];
                int y = edge[2];
                if(s.find(x)!=s.find(y)){
                    ans+=w;
                    s.unite(x,y);
                }
            }
            cout<<"ans: "<<ans<<endl;
        }
};

int main(){
    Graph g(4);
    g.addEdge(10,0,1);
    g.addEdge(15,1,3);
    g.addEdge(4,2,3);
    g.addEdge(6,2,0);
    g.addEdge(5,0,3);
    g.kruskalMst();
}