#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMax(vector<int>& ,int );


int main(){
    int max = 0;
    vector<int> v = {1,2,3,4};

    max = getMax(v,v.size());
    cout<< max;
}

int getMax(vector<int>& vec,int n){
    
    // Base case 1
    if(n == 1){
        return vec[0];    
    }

    return max(vec[n-1],getMax(vec,n-1)); 

}