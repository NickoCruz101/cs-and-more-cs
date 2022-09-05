#ifndef __TESTING_H__
#define __TESTING_H__

#include "Node/Node.h"
#include "Linked_List/LinkedList.h"
#include "gtest/gtest.h"

TEST(NODE_CONSTRUCTOR_TEST, no_arguments){
    Node* n = new Node();

    EXPECT_EQ(n->getValue(),0);
    EXPECT_EQ(n->next,nullptr);
}

TEST(NODE_CONSTRUCTOR_TEST, val_argument){
    Node* n = new Node(10);

    EXPECT_EQ(10,n->getValue());

};

TEST(NODE_CONSTRUCTOR_TEST, val_and_Node_arguments){
    Node* b = new Node(14);
    Node* a = new Node(22,b);

    EXPECT_EQ(a->next, b);
    EXPECT_EQ(a->getValue(),22);
    EXPECT_EQ(b->getValue(),14);
};



#endif