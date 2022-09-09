#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include "../Node/Node.h"

class LinkedList{
    private:
        Node* head = nullptr;
        int list_size = 1;
    public:
        LinkedList();

        LinkedList(Node* head);

        Node* getHead();

        int getHeadVal();
        
        void updateSize();
        int getSize();


        void delete_this(Node* n);
        void append(Node* n);
        void insert(int index, Node* node);
        void print();
};



#endif