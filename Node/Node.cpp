#include <iostream>
#include "Node.h"


Node::Node(){
    this->value = NULL;
}
Node::Node(int value){
    this->value = value;
}

int Node::getValue(){
    return this->value;
}

SingleLinkNode::SingleLinkNode(int value, Node* next): Node(value){
    this->next = next;
}