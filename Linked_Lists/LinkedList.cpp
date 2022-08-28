#include "LinkedList.h"

LinkedList::LinkedList(Node* head){
    this->head = head;
}

// Don't pass tail node in
void LinkedList::delete_Node(Node* n){
    n->value = n->next->value;
    n->next = n->next->next;
}