#include <iostream>
#include <limits>
#include <vector>

using namespace std;



class Graph{

public:
    vector<int> t_dist;

    Graph(){
        this->t_dist = {};
    };



    void output_t_dist(){
        for(int i = 0; i < this->t_dist.size(); i++){
            cout << t_dist[i] << ", ";
        }
        cout << endl;
    }

};

int main(){
    int n; // number of vertices
    int m; // number of edges
    cin >> n >> m;

    int s; // source vertex
    int t; // ending vertex

    cin >> s >> t;

    Graph G;

    int inf = numeric_limits<int>::max(); // infinity

    // assigns tentative distances to infinity
    // when i == s we assign that value to 0
    for(int i = 0; i < n; i++){
        G.t_dist.push_back(inf); 
    }

    G.t_dist[s] = 0;






}