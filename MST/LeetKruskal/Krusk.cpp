#include <iostream>
#include <vector>

using namespace std;

// DJS: DisJoint Set
class DJS{

public:
    vector<int> P;
    DJS(int n){

    }
    
    int Find(int v){
        while(v != this->P[v]){
            v = this->P[v];
        }
        return v;
    }

}