#include "BinaryTree.h"

TreeNode::TreeNode(){
    this->val = 0;
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

bool TreeNode::isEmpty(){
    if(this->right == nullptr && this->left == nullptr){
        return true;
    }
    return false;
}

BinaryTree::BinaryTree(TreeNode* root){
    this->root = root;
}


void BinaryTree::insert_helper(TreeNode* base, TreeNode* n){
    if(base->isEmpty()){
        if(base->getVal() < n->getVal()){
            base->setRight(n);
        }
        else{ base->setLeft(n); }
    }
    
}

void BinaryTree::insert(TreeNode* n){
    // assign iterator
    TreeNode* curr_node = this->root;

}

TreeNode* buildTree(vector<int> &vec){

};