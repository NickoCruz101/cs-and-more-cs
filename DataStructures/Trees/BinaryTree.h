#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__

#include <vector>
#include <iostream>

using std::vector; using std::cout;
using std::endl;

class TreeNode {
    private:
        int val;
        TreeNode* left = nullptr;
        TreeNode* right = nullptr;



    public:
        TreeNode();
        TreeNode(int val);
        TreeNode(int val, TreeNode* left);
        TreeNode(int val, TreeNode* left, TreeNode* right);

        int getVal();

};

class BinaryTree:public TreeNode{

    private:
        TreeNode* root = nullptr;
    protected:

    public:
        BinaryTree(vector<int>& vec);


};

#endif