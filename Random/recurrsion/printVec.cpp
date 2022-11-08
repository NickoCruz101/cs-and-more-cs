#include <iostream>
#include <vector>

using namespace std;

int printVec(vector<int>& );

int main(){
    
}

int printVec(vector<int>& vec, int i){
    if(i == vec.size() - 1){
        return vec[i];
    }

    return printVec(vec,i+1);


}