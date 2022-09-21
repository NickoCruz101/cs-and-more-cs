#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__

#include <vector>

using std::vector;

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


};

class BinaryTree:public TreeNode{

    private:
        TreeNode* root = nullptr;
    protected:

    public:
        BinaryTree(vector<int>& vec);


};

#endif