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

    bubbleSort(list);
}
void bubbleSort(LinkedList* l){
    for(Node* i = l->getHead(); i != nullptr; i++){
        cout << i << endl;
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