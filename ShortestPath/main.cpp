#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

struct input{
    int cities;
    int roads;
    int startVertex;
    int finalVertex;
    vector<int> weights;
    vector<int> vertices;
    vector<tuple<int,int>> edges;
    input(){
        cin >> this->cities >> this->roads;

        for(int i = 0; i < this->roads; i++){
        
        }
    }

};

int main(){

}