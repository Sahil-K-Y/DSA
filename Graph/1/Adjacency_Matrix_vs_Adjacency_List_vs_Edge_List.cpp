#include <iostream>
#include <vector>
#include<list>
using namespace std;

class Graph{
    
    int V;
    list<int>*adj;
    public:
        Graph(int vertices){
            V=vertices;
            adj=new list<int>[V];
        }
        void addEdge(int u,int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        void printGraph(){
            for(int i=0;i<V;i++){
                cout<<i<<"->";
                for(int neighbor:adj[i]){
                    cout<<neighbor<<" ";
                }
                cout<<endl;
            }
        }
        ~Graph(){
            delete[] adj;
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