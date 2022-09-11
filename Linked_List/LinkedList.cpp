#include "LinkedList.h"

LinkedList::LinkedList(){
    this->head = new Node();
}

LinkedList::LinkedList(Node* head){
    this->head = head;
}

Node* LinkedList::getHead(){
    return this->head;
}

int LinkedList::getHeadVal(){
    return this->head->getValue();
}

void LinkedList::updateSize(){
    Node* curr = this->head;
    int size = 0;

    while(curr != nullptr){
        size = size + 1;
        curr = curr->next;
    }

    this->list_size = size;
}

void LinkedList::create(vector<int> vec){
    
}

int LinkedList::getSize(){
    return this->list_size;
}

// Don't pass tail node in
void LinkedList::delete_this(Node* n){
    n->value = n->next->value;
    n->next = n->next->next;
}



void LinkedList::append(Node* n){ 
    Node* iter = this->head;

    while(iter){
        if(iter->next == nullptr){
            iter->next = n;
            this->list_size = this->list_size + 1;
            return;
        }
        iter = iter->next;
    }
}

void LinkedList::insert(int index, Node* node){
    Node* iter = this->head;
    Node* pushed_node = iter->next;
    int i = 0;

    while(iter){
        if(i == index - 1){
            iter->next = node;
            node->next = iter->next->next;
        }
    }
}


void LinkedList::print(){
    if(this->head == nullptr){
        cout<<"headless list"<<endl;
    }
    Node* iter = this->head;

    while(iter != nullptr){
        if(iter->next == nullptr){
            cout<< "[ " << iter->getValue() << " ]" << endl;
            break;
        }
        cout<< "[ " << iter->getValue() << " ]" << "-> ";
        iter = iter->next;
    }
}