#ifndef __TESTING_H__
#define __TESTING_H__

#include "Node/Node.h"
#include "Linked_Lists/LinkedList.h"
#include "gtest/gtest.h"

TEST(NodeTest, NodeConstructor){
    Node* n = new Node(10);

    EXPECT_EQ(10,n->getValue());

};



#endif