#include <iostream>
#include <vector>

using namespace std;

// DJS: DisJoint Set
class DJS{

public:
    vector<int> P;
    vector<int> W;

    DJS(int n){
        this->P.resize(n+1);
        this->W.resize(n+1);

        for(int i = 1; i <= n; ++i){
            this->P[i] = i;
            this->W[i] = 1;
        }

    }
    
    int find(int v){
        while(v != this->P[v]){
            this->P[v] = this->P[ P[v] ];
            v = this->P[v];
        }
        return v;
    }

    void the_union(int u, int v){
        int pu = find(u);
        int pv = find(v);

        if(pu == pv) return; // if u and v have the the same parent node, Then
                            // both u and v are in the same set.
        
        if(this->W[pu] > this->W[pv]){
            this->P[pv] = pu;
            this->W[pu] = this->W[pu] + this->W[pv];
        } 
        else{
            this->P[pu] = pv;
            this->W[pv] = this->W[pv] + this->W[pu];
        }
    }

    bool inSameSet(int u, int v){
        return find(u) == find(v);
    }

};

class MST{
    public:
        int minCost(int n, vector< vector<int> >& E){
            DJS* djs = new DJS(n);

            // Sort E from begin to end, using a lambda function which sorts based on weights
            // in vector a and vector b;
            sort(E.begin(), E.end(),
            
            // Lambda Expression
            [](const vector<int> &a, const vector<int>& b){ 
                return a[2] < b[2]; // grabs the third element in a and b, which are where the weights are assigned
            }
            );

            int added_edges = 0;

            int cost = 0;

            for(int i = 0; i < E.size(); ++i){
                int a = E[i][0];
                int b = E[i][1];

                if(djs->inSameSet(a,b)) continue;

                djs->the_union(a,b);

                cost = cost + E[i][2];

                added_edges += 1;
            }

            if(added_edges == n-1){
                return cost;
            }
            else{
                return -1;
            }
        }
};

int main(){
    int n,m;
    cin >> n >> m;

    vector< vector<int> > E;
    
    int u,v,w;
    for(int i = 0; i < m; i++){
        vector<int> edge;
        cin >> u >> v >> w;
        edge.push_back(u);
        edge.push_back(v);
        edge.push_back(w);
        E.push_back(edge);

    }
}