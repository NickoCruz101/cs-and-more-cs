#include "Node.h"


Node::Node(){}

Node::Node(int value){
    this->value = value;
}

Node::Node(int value,Node* next){
    this->value = value;
    this->next = next;
}

Node::Node(int value, Node* prev, Node* next){
    this->prev = prev;
    this->next = next;
    this->value = value;
}

int Node::getValue(){
    return this->value;
}

// bool Node::getLinkStatus(){
//     if(this->link_status == true){
//         if(this->double_linked) return true;
        
//         return this->
//     }
//     if(this->prev == nullptr && this->next == nullptr){
//         this->double_linked = true;
//         this->single_linked = !this->double_linked;
//         return true;
//     }
//     else{
//         this->double_linked = false;
//         this->single_linked = 


//         return false;
//     }
// }