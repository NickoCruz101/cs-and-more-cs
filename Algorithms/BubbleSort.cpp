#include <iostream>
#include <vector>
#include <algorithm>
#include "../Linked_List/LinkedList.h"
using std::vector; using std::string;
using std::swap; using std::cout;
using std::endl;


void bubbleSort(LinkedList* l);

void bubbleSort(int arr[], int n);


int main(){
    vector<int> vec = {44,21,65,23,34};
    int arr[6] = {345,223,143, 89,632,45};

    LinkedList* list = new LinkedList();
    list->create(vec);

    list->print();

    bubbleSort(list);

    list->print();



    // bubbleSort(arr,6);

    // for(int i = 0; i < 6; i++){
    //     cout<< arr[i]<<endl;
    // }


}
void bubbleSort(LinkedList* l){
    for(Node* i = l->getHead(); i != nullptr; i++){

        for(Node* j = i->next; j != nullptr; j++){
            
            if(i->getValue() > j->getValue()){
                Node* temp = j->next;
                j->next = i;
                i->next = temp;
                
            }else{
                break;
            }
        }
    }
}

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