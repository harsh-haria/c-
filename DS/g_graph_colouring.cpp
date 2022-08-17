#include<bits/stdc++.h>
using namespace std;

#define vii vector<vector<int>> 

int colorTheGraph(vii g, int v, int e){
    int ans = 1;
    int vertexColour[v] = {0};
    for(int i=1; i<v; i++){
        vertexColour[i] = -1;
    }
    for(int i=1; i<v; i++){
        bool coloured[v] = {0};
        for(auto x:g[i]){
            if(vertexColour[x]!=-1){
                coloured[vertexColour[x]] = true; 
            }
        }
        for(int j=0; j<v; j++){
            if(coloured[j]==0){
                vertexColour[i] = j;
                break;
            }
        }
    }
    int max = 0;
    for(int i=0; i<v; i++){
        if(vertexColour[i]>max){
            max = vertexColour[i];
            ans++;
        }
    }
    cout<<"Elements got colour: ";
    for(int i=0; i<v; i++){
        cout<<vertexColour[i]<<" ";
    }
    cout<<endl;
    return ans;
}

int main(){
    int v,e;
    cin>>v>>e;
    vii g(v);
    for(int i=0; i<e; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ans = 0;
    ans = colorTheGraph(g,v,e);
    cout<<"The Minimum number of colours required is: "<< ans <<endl;
    return 0;
}