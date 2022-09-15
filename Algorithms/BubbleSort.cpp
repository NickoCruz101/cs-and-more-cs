#include <iostream>
#include <vector>
#include <algorithm>

using std::vector; using std::string;
using std::swap; using std::cout;
using std::endl;


void bubbleSort(int arr[], int n){
    int i;
    int j;

    for( i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){

            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main(){
    int arr[6] = {345,223,143, 89,632,45};

    bubbleSort(arr,6);

    for(int i = 0; i < 6; i++){
        cout<< arr[i]<<endl;
    }

}

// void bubble_sort(vector<int>& vec);
// void swap(int a, int b);


// void swap(int* a, int* b){

// }



// void bubble_sort(vector<int>& vec){
//     int* a = nullptr;
//     int* b = nullptr;

//     for(int i = 1; i < vec.size(); i++){
//         a = &vec[i-1];
//         b = &vec[i]

//         if( < vec[i-1]){
//             swap(vec[i],vec[i-1]);
//         }
//     }
// }