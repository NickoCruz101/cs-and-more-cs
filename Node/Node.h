#ifndef NODE_H
#define NODE_H

class Node{

    public:
        int value;
        Node* next;
        
        Node();
        Node(int value, Node* next);

        int getValue();
};



#endif