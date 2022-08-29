#ifndef __NODE_H__
#define __NODE_H__

#define NULL 0
class Node{

    public:
        int value = NULL;
        Node* next = nullptr;
        
        Node();
        Node(int value);
        Node(int value, Node* next);

        int getValue();
};



#endif