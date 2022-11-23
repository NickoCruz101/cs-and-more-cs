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

    int n = 5;
    int m = 7;
    //int n, m;
    //cin>> n>> m;

    //int start, dest;
    //cin>> start>> dest;

    int start = 4;
    int dest = 3;

    Graph G(n);

    // int u,v,w;
    // for(int i = 0; i < m; i++){
    //     cin >> u >> v >> w;
    //     G.addEdge(u,v,w);
    // }

    G.addEdge(0,1,78);
    G.addEdge(1,2,94);
    G.addEdge(1,3,63);
    G.addEdge(2,4,49);
    G.addEdge(0,2,34);
    G.addEdge(3,4,686);
    G.addEdge(0,3,904);

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
        cout<<"i: "<< i << endl;
        cout<<"\t"<< endl;

        
        for(int j = 0; j < M; j++){
            int bu = G.E[j].u;
            int bv = G.E[j].v;
            int bw = G.E[j].w;
            G.E[j].dprint();
            cout<< endl;
            cout<< "T[u]: "<< T_dist[bu]<< ", "<< "T[v]: "<< T_dist[bv] << endl;

            if(T_dist[bu] != inf && T_dist[bu] + bw <= T_dist[bv]){
                T_dist[bv] = T_dist[bu] + bw;
            }

        }

        // for (int i = 0; i < G.e_count(); i++) {
        //     int bu = G.E[i].u;
        //     int bv = G.E[i].v;
        //     int weight = G.E[i].w;
        //     if (T_dist[bu] != inf
        //         && T_dist[bu] + weight < T_dist[bv]) {
        //     }
 
        // }
    }
    cout<< endl;
    for(int i = 0; i < T_dist.size(); i++){
        cout<< "i: "<<i << " "<< T_dist[i] << endl;
    }

}