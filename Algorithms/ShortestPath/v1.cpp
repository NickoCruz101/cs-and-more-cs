#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct edge{
    int u;
    int v;
    int weight;

    edge(int i, int f, int w){
        u = i;
        v = f;
        weight = w;
    }

    int getWeight(){
        return this->weight;
    }

    string output(){
        ostringstream oss;
        oss << "( " << this->u<< " -> "<< this->v<<" , "<< this->weight<< " )"<< endl;
        string o = oss.str();
        return o;
    }


};

class Graph{

public:
    vector<int> Tdist; // tentative distance, 
                        // Tdist[k] is the distance assigned to kth vertex

    vector<int> Q; // priority queue
    vector<edge> E; // Set of Edges


    Graph(){
        this->Tdist = {};
        this->Q = {};
        this->E = {};
    };

    vector<edge> getNeighbors(int p){
        vector<edge> N;
        for(int i = 0; i < this->E.size(); i++){
            if(E[i].u == p || E[i].v == p){
                N.push_back(E[i]);
            }

        }

        return N;
    }

    void output(){
        for(int i = 0; i < this->Tdist.size(); i++){
            cout << Tdist[i] << ", ";
        }
        cout << endl;

        for(int j = 0; j < this->E.size(); j++){
            cout<< E[j].output() << " ";
        }
    }

 



};

int main(){
    int n; // number of vertices
    int m; // number of edges
    cin >> n >> m;

    int s; // source vertex
    int t; // ending vertex

    cin >> s >> t;

    Graph G; // Graph init

    int inf = numeric_limits<int>::max(); // infinity

    // assigns tentative distances to infinity
    // when i == s we assign that value to 0
    for(int i = 0; i < n; i++){
        G.Tdist.push_back(inf); 
    }
    G.Tdist[s] = 0; // source vertex

    int vi;
    int vf;
    int weight;

    for(int i = 0; i < m; i++){
        cin>> vi>> vf>> weight; 
        G.E.push_back(edge(vi,vf,weight));
    }

    G.output();

    vector<edge> N = G.getNeighbors(0);

    for(int i = 0; N.size(); i++){
        cout<< N[i].output();
    }











}