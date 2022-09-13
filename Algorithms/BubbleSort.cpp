#include "../Linked_List/LinkedList.h"
#include "../Node/Node.h"

// swap a with b
void swap(Node* a, Node* b){
    Node* tmp = b->next;
    b->next = a;
    a->next = tmp;
}

void BubbleSort(LinkedList* list){
    Node* a_ptr = list->getHead();
    Node* b_ptr = nullptr;

    while(b_ptr->next != nullptr){
        if(a_ptr->value > b_ptr->value){
            swap(a_ptr,b_ptr);
        }

        
    }

}