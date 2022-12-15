#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Raw


struct Edge{
    int u,v,w;
    Edge(int u, int v, int w):u(u),v(v),w(w){};
};

bool notCircuit(vector<bool>& visited, Edge& e){
    return visited[e.u] && visited[e.v];
}

bool isNeighbor(Edge& e, int source){
    int u = e.u;
    int v = e.v;

    if(u == source || v == source){
        return true;
    }
}
// struct PriorityQueue{
//     vector<Edge> E;

//     PriorityQueue(int n){
//         this->E = {}

//         for(int i = 0; i < n; i++){
//             E.push_back()
//         }

//     }

//     void insert(Edge e){
//     }
// }



int main(){
    vector<bool> visited; //visited[v] -> false if vertex v has not been visited
    vector<Edge> E; // e = (u,v,w)
    vector<int> A;
    
    int n,m,u,v,w;
    cin>> n >> m;

    for(int i = 0; i < n; i++){
        visited.push_back(false);
        cin >> u >> v >> w;
        Edge e(u,v,w);
        E.push_back(e);
    }

    // lets just start at the 0th vertex
    visited[0] = true;
    A.push_back(0);
    

    int needToConnect = n - 1; // number of vertices (n) - 1

    int min = 99999;
    int cost = 0;
    while(needToConnect != 0){
        // Get minimum weight of neighbors to source
        for(int i = 0; i < E.size(); i++){
            int s = A[i];
            if(isNeighbor(E[i],A[i]) && notCircuit(visited,E[i]))
            {
                if(E[i].w < min){
                    min = E[i].w;
                    cout<< "min: "<< min << endl;
                }

            }
        }
        // needToConnect = needToConnect - 1;


    }

   

}