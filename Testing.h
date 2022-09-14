#ifndef __TESTING_H__
#define __TESTING_H__

#include "Node/Node.h"
#include "Linked_List/LinkedList.h"
#include "gtest/gtest.h"

Node* g_a {new Node(1)};
Node* g_b {new Node(2)};
Node* g_c {new Node(3)};
Node* g_d {new Node(4)};
Node* head {new Node(33)};
LinkedList* test_list {new LinkedList(head)};

TEST(NODE_CONSTRUCTOR_TEST, no_arguments){
    Node* n = new Node();

    EXPECT_EQ(n->getValue(),0);
    EXPECT_EQ(n->next,nullptr);
}

TEST(NODE_CONSTRUCTOR_TEST, 1_argument){
    Node* n = new Node(10);

    EXPECT_EQ(10,n->getValue());

};

TEST(NODE_CONSTRUCTOR_TEST, 2_arguments){
    Node* b = new Node(14);
    Node* a = new Node(22,b);

    EXPECT_EQ(a->next, b);
    EXPECT_EQ(a->getValue(),22);
    EXPECT_EQ(b->getValue(),14);
};


TEST(NODE_SETTERS, set_next){
    Node* a = new Node(1);
    Node* b = new Node(33);

    a->set("next",b);

    EXPECT_EQ(a->next, b);
    EXPECT_EQ(a->next->value, b->getValue());
};

TEST(NODE_SETTERS, set_prev){
    Node* prev = new Node(22);
    Node* node = new Node(32);

    node->set("prev",prev);

    EXPECT_EQ(node->prev, prev);
    EXPECT_EQ(node->prev->value, prev->value);
}

TEST(LINKEDLIST_CONSTRUCTORS, empty){
    LinkedList* list = new LinkedList();

    EXPECT_EQ(list->getHeadVal(), 0);

    //EXPECT_EQ(list->getHead(), nullptr);
}

TEST(LINKEDLIST_CONSTRUCTORS, nonEmpty){
    Node* h = new Node(57);
    LinkedList* list = new LinkedList(h);

    Node* head = list->getHead();
    EXPECT_EQ(head->getValue(), 57);
}

TEST(LINKEDLIST_Func, updateSize_getSize){
    Node* h = new Node(57);
    Node* n1 = new Node(22);
    Node* n2 = new Node(43);
    Node* n3 = new Node(34);

    h->set("next",n1);
    n1->set("next",n2);
    n2->set("next",n3);

    LinkedList* list = new LinkedList(h);
    list->updateSize();
    int size = list->getSize();

    EXPECT_EQ(size, 4);
}

TEST(LINKEDLIST_FUNC, global_node){
    Node* n = new Node(2,g_a);

    EXPECT_EQ(n->next->getValue(),1);
}

TEST(LINKEDLIST_FUNC, get_size){
    test_list->print();
    cout<< test_list->getSize() << endl;
    test_list->updateSize();
    int size = test_list->getSize();

    EXPECT_EQ(test_list->getSize(),5);
}
#endif