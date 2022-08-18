#include <iostream>
#include "Node.h"


Node::Node(){
    this->value = NULL;
    this->next  = nullptr;
}
Node::Node(int value){
    this->value = value;
    this->next = nullptr;
}
Node::Node(int value, Node* next){
    this->value = value;
    this->next = next;
}

int Node::getValue(){
    return this->value;
}