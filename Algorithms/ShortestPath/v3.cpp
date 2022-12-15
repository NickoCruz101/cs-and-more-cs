#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>

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

    vector<unordered_map<int,int>> N; // N[i] = a map of vertices adjacent to vertex i
                                        // N[i][0] = vertex lbl of the adjacent vertex to the ith
                                        // N[i][1] = weight?


    Graph(){
        this->Tdist = {};
        this->N = {};
    };



    void output(){
        for(int i = 0; i < this->Tdist.size(); i++){
            cout << Tdist[i] << ", ";
        }
        cout << endl;
    }

    unordered_map<int,int> Neighbors(int i){
        return N[i];
    }

 



};

int main(){
    

}