#include<iostream>
using namespace std;
#define V 4

int countTriangle(int graph[V][V], bool isDirected){

    int count_Triangle = 0;
 
    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++){
            for (int k = 0; k < V; k++){
               if (graph[i][j] && graph[j][k] && graph[k][i]){count_Triangle++;}
            }
        }
    }

    isDirected? count_Triangle /= 3:count_Triangle /= 6;
 
    return count_Triangle;
}

int main(){
    int count = 0;
    int graph[][V] = { {0, 1, 1, 0},
                       {1, 0, 1, 1},
                       {1, 1, 0, 1},
                       {0, 1, 1, 0}
                     };
 
    // Create adjacency matrix
    // of a directed graph
    int digraph[][V] = { {0, 0, 1, 0},
                        {1, 0, 0, 1},
                        {0, 1, 0, 0},
                        {0, 0, 1, 0}
                       };

    cout<< countTriangle(graph,false)<<endl;
    cout<< countTriangle(digraph,true)<<endl;
}