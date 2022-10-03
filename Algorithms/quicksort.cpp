#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::string; using std::endl;
using std::cout; using std::vector;
using std::swap;

vector<int> quickSort(vector<int>& );

int main(){

}

vector<int> quickSort(vector<int>& vec){
    for(int i = 0; i < vec.size(); i++){
        for(int j = i+1; j < vec.size(); j++){
            if(vec[j] < vec[i]){
                swap(vec[i],vec[j]);
            }
        }
    }
}