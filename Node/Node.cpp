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
