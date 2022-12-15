// Huffman Coding in C++

#include <iostream>
using namespace std;

#define MAX_TREE_HT 50

struct MinHNode{
    unsigned freq;
    char item;
    struct MinHNode *left, *right;
};

struct MinH{
    unsigned size;
    unsigned capacity;
    struct MinHNode **array; //idk what this is
};

// Creating Huffman tree noe

struct MinHNode *newNode(char item, unsigned freq){
    struct MinHNode *temp = (struct MinHNode *)malloc(sizeof(struct MinHNode));
}

