#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include "../Node/Node.h"

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(Node* head){
            this->head = head;
        }

        void delete_Node(Node* );
};



#endif