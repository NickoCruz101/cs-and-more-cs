#include <iostream>
#include <vector>

using namespace std;

int getMax(vector<int>& ,int ,int max = 0);


int main(){
    int max = 0;
    vector<int> v = {1,2,3,4};

    cout<< getMax(v,0,0);
}

int getMax(vector<int>& vec,int i,int max){
    
    // Base case 1
    if(i >= vec.size()){
        return 0;
    }

    // Max condition
    if(max < vec[i]){
        max = getMax(vec,i+1,max);
    }

    return max;

}