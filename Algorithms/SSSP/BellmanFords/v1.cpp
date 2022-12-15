#include <iostream>
#include <vector>
#include <limits>

using namespace std;

struct Edge{
    int u,v,w;

    Edge(int u, int v, int w):u(u),v(v),w(w){};

    void dprint(){
        cout<<"( "<< this->u<< ","<< this->v<< ","<< this->w<<" )"<<" ";
    }
};

struct Graph{
    vector<int> V;
    vector<Edge> E;
    

    Graph(int n){
        this->V.resize(n);
        this->E = {};
    }

    void addEdge(int u, int v, int w){
        Edge e(u,v,w);
        E.push_back(e);
    }

    int v_count(){
        return this->V.size();
    }

    int e_count(){
        return this->E.size();
    }

};

int BellmanFord(Graph& G, int s, int f);

int inf = numeric_limits<int>::max();

int main(){


    int n, m;
    cin>> n>> m;

    int start, dest;
    cin>> start>> dest;


    Graph G(n);

    int u,v,w;
    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;
        G.addEdge(u,v,w);
    }

    BellmanFord(G,start,dest);
    
    
}

int BellmanFord(Graph& G, int s, int f){
    int N = G.v_count();
    int M = G.e_count();
    vector<int> T_dist(N,inf);
    if(f<s){
        int t = s;
        s = f;
        f = t;

    }
    T_dist[s] = 0;

    for(int i = 0; i < N; i++){

        
        for(int j = 0; j < M; j++){
            int bu = G.E[j].u;
            int bv = G.E[j].v;
            int bw = G.E[j].w;


            if(T_dist[bu] != inf && T_dist[bu] + bw <= T_dist[bv]){
                T_dist[bv] = T_dist[bu] + bw;
            }

            if(T_dist[bu] == inf){
                T_dist[bu] = bw;
            }
        }

        for (int i = 0; i < G.e_count(); i++) {
            int bu = G.E[i].u;
            int bv = G.E[i].v;
            int weight = G.E[i].w;
            if (T_dist[bu] != inf
                && T_dist[bu] + weight < T_dist[bv]) {
            }
 
        }


    }

}