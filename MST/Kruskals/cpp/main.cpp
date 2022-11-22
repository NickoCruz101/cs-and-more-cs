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

};

struct Q{
    vector<Edge> E;
    
    Q(vector<Edge> E){
        this->E = E;
    }

    Edge getMin(){
        int min_weight = 999999;
        Edge e(0,0,0);
        for(int i = 0; i < E.size(); i++){
            if(this->E[i].w < min_weight){
                min_weight = E[i].w;
                e = E[i];
            }
        }

        return e;
    }
};

bool isValid(vector<bool>& ,Edge& );
vector<bool> visited;
int main(){
    //vector<bool> visited = {true,true,true,true};
    Edge e1(1,2,5);
    Edge e2(1,3,2);
    Edge e3(1,0,4);

    vector<Edge> E = {e1,e2,e3};

    Q q(E);

    Edge e = q.getMin();

    cout<<"min: "<< e.u << " "<< e.v<< " "<< e.w<<endl;

    for(int i = 0; i < 3; i++){
        if(isValid(visited,E[i])){
            cout<< "valid edge: "<< e.u << " "<< e.v<<" "<<e.w<< endl;
        }
    }




}

bool isValid(vector<bool>& visited, Edge& e){
    if(visited[e.u] == true && visited[e.v] == true){
        return false;
    }

    return true;
}