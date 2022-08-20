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


int Node::getValue(){
    return this->value;
}