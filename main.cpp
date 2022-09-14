#include "Node/Node.h"
#include "Linked_List/LinkedList.h"


int main(){
    Node* n2 = new Node(45);
    Node* n1 = new Node(34, n2);
    Node* n0 = new Node(10, n1);

    LinkedList linked_list(n0);

    linked_list.print();
    linked_list.updateSize();

    cout<< linked_list.getSize()<<endl;


    linked_list.print();

    cout<< "yo" <<endl;

}