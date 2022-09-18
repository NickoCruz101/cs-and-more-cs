#include "Node/Node.h"
#include "Linked_List/LinkedList.h"


int main(){
    Node* n2 = new Node(45);
    Node* n1 = new Node(34, n2);
    Node* n0 = new Node(10, n1);

    LinkedList linked_list_A(n0);

    linked_list_A.print();
    linked_list_A.updateSize();

    cout<< linked_list_A.getSize()<<endl;


    vector<int> vec = {1,2,3,4};
    LinkedList* linked_list_B = new LinkedList();

    linked_list_B->create(vec);


    linked_list_B->print();

    

}