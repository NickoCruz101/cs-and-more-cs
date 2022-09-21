#include "BinaryTree.h"

TreeNode::TreeNode(){
    this->val = NULL;
    this->left = nullptr;
    this->right = nullptr;
};

TreeNode::TreeNode(int val){
    this->val = val;
    this->left = nullptr;
    this->right = nullptr;
};

TreeNode::TreeNode(int val, TreeNode* left){
    this->val = val;
    this->left = left;
    this->right = nullptr;
};

TreeNode::TreeNode(int val, TreeNode* left, TreeNode* right){
    this->val = val;
    this->left = left;
    this->right = right;
};

BinaryTree::BinaryTree(vector<int>& vec){

}