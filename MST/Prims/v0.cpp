#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>


using namespace std;

void printMatrix(vector< vector<int> >);

int inf = numeric_limits<int>::infinity();
vector<int> D; // holds the tentative distance of D[k],
                // where k is the kth vertex

int main(){
    int n; // num of verices
    int m; // num of edges
    cin >> n >> m;
    vector< vector<int> > N(n, vector<int>(n,inf)); //Neighbors of the vertices with (rows = n+1, cols = n+1)
                                                        // N[u][v] = w, i.e. the weight of edge from u to v 

    // Read in and initialize Neighbors
    int k = 1;
    int u,v,w;
    while(k <= m){
        cin >> u >> v >> w;
        // (Bi-directional Graph) non-directed graph G can travel both ways so 
        N[u][v] = w; // Populates the edge from u to v
        N[v][u] = w; // Populates the edge from v to u
        k = k + 1;
    }
    
    // initialize all D[k]=inf 
    k = n;
    while(k >= 0){
        D.push_back(inf);
        k = k - 1;
    }

    // Start at the 0th vertex (simplifies things)
    D[0] = 0;

    printMatrix(N);

}

void printMatrix(vector<vector<int>> N){
    cout<< endl;
    for(int i = 0; i < N.size(); i++){
        vector<int> row = N[i];

        for(int j = 0; j < row.size(); j++){
            cout<< row[j] << " ";
        }

        cout<< endl;
    }
}
