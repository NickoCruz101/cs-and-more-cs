#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include "../Node/Node.h"
#include <vector>

using std::vector;

class LinkedList{
    private:
        Node* head = nullptr;
        int list_size = 0;
    public:
        LinkedList();

        LinkedList(Node* head);

        Node* getHead();
        int getHeadVal();

        void create(vector<int> );
        void updateSize();

        int getSize();
        void swap(Node* a, Node* b);


        void delete_this(Node* n);
        void append(Node* n);
        void insert(int index, Node* node);
        void print();
};



#endif