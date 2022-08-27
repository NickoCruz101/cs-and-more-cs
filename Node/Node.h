#ifndef NODE_H
#define NODE_H

class Node{
    private:
        int value;
        Node* next;

    public:
        Node();
        Node(int value, Node* next);

        int getValue();
};



#endif