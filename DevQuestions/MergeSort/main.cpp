#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void merge(vector<int>& ,int start, int end);
void mergeSort(vector<int>& ,int start,int end);

int main(){

}


// start: the first elements index to start
// end: the last elements index to stop
void mergeSort(vector<int>& vec,int start,int stop){
    
    int mid = 0; // middle index of vector
    mid = (start-stop)/2;

    cout<< "mid: " << mid << endl;

    vector<int> sub;

    for(int i = 0; i < stop; i++){
        sub.push_back(vec[i]);
    }



    
}