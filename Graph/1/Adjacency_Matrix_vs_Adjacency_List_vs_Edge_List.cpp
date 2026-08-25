#include <iostream>
#include <vector>
using namespace std;

class Graph{
    vector<vector<int>>adj;
    int V;
    
    public:
        Graph(int vertices){
            V=vertices;
            adj.resize(V);
        }
        void addEdge(int u,int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        void printGraph(){
            for(int i=0;i<V;i++){
                for(int neighbor:adj[i]){
                    cout<<neighbor<<" ";
                }
            }
        }
};
int main(){
    // cout<<"hi";
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,3);
    g.printGraph();
    return 0;
}