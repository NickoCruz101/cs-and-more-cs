#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct Edge{
    int u,v,w;
    Edge(int u, int v, int w):u(u),v(v),w(w){};

    int get_weight(){
        return this->w;
    }

    /*
        Overload equality operator, edgeA == edgeB iff all attributes are the same
    */
    bool operator==(const Edge& other) const{
        return(u == other.u && v == other.v && w == other.w);
    }



};

struct Q{
    vector<Edge> E;
    
    Q(vector<Edge> E){
        this->E = E;
    }
    /*
        getMin() , 
        returns the Edge with the minimum weight, and removes it from the list, 
        regardless if its a valid edge or not
    */
    Edge getMin(){
        int min_weight = 999999;
        Edge e(0,0,0);
        for(int i = 0; i < E.size(); i++){
            if(this->E[i].w < min_weight){
                min_weight = E[i].w;
                e = E[i];
            }
        }
        remove_Edge(e);
        return e;
    }

    /*
        Removes Edge from E, by copying over the entire vector 
        where the edge wanting to be removed is not copied over.
    */

    void remove_Edge(Edge& e){
        vector<Edge> new_E;
        for(int i = 0; i < this->E.size(); i++){
            if(E[i] == e){
                continue;
            }
            new_E.push_back(E[i]);
        }

        this->E = new_E;
    }
};

bool isValid(vector<bool>& ,Edge& );
void updateCost(int& cost, vector<bool>& , Edge& e);
//vector<bool> visited;

void printVisited(vector<bool>& vec){
    for(int i = 0; i < vec.size(); i++){
        cout<< vec[i] << " ";
    }

    cout<<endl;
}
int main(){
    int totalCost = 0;
    vector<bool> visited = {false,false,false,false,false};
    Edge e1(1,2,5);
    Edge e2(2,3,2);
    Edge e3(0,1,4);
    Edge e4(0,2,6);

    vector<Edge> E = {e1,e2,e3,e4};



    Q q(E);

    while(q.E.size() != 0){
        Edge e = q.getMin();
        if(isValid(visited,e)){
            updateCost(totalCost,visited,e);
            cout<< "cost: "<< totalCost << endl;
            printVisited(visited);
        }
    }

    for(int i = 0; i < q.E.size(); i++){
        cout<< E[i].u << E[i].v << E[i].w<< endl;
    }

    cout<< totalCost<<endl;






}

bool isValid(vector<bool>& visited, Edge& e){
    if(visited[e.u] == true && visited[e.v] == true){
        return false;
    }

    return true;
}


void updateCost(int& cost, vector<bool>& visited, Edge& e){
    cost = cost + e.get_weight();
    if(visited[e.u] && visited[e.v]){
        cout<< "INVALID EDGE: "<< "("<< e.u<<","<< e.v<< ","<< e.w<< ")"<< endl;
        return;
    }
    visited[e.u] = true;
    visited[e.v] = true;

}