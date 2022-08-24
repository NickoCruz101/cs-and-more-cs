#ifndef NODE_H
#define NODE_H

class Node{
    private:
        int value;

    public:
        Node();
        Node(int value);

        int getValue();
  
};

class SingleLinkNode: public Node{
    private:
        Node* next;
    public:
        SingleLinkNode(int value, Node* next);
};

#endif