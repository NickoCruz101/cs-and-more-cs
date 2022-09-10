#include <iostream>
#include <vector>

using std::vector; using std::string;

void bubble_sort(vector<int>& vec);
void swap(int a, int b);

int main(){

}

void swap(int* a, int* b){

}

void bubble_sort(vector<int>& vec){
    int* a = nullptr;
    int* b = nullptr;

    for(int i = 1; i < vec.size(); i++){
        a = &vec[i-1];
        b = &vec[i]

        if( < vec[i-1]){
            swap(vec[i],vec[i-1]);
        }
    }
}