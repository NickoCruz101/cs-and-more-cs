#include "Node.h"
#include <iostream>

using std::cout; using std::endl;


int main(){
    Node* n = new Node(55);
    SingleLinkNode s_node1(4,n);

    cout<<n->getValue();

    
    

}