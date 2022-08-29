#include <iostream>
#include "Node.h"


Node::Node(){}

Node::Node(int value){
    this->value = value;
}

Node::Node(int value,Node* next){
    this->value = value;
    this->next = next;
}

int Node::getValue(){
    return this->value;
}
