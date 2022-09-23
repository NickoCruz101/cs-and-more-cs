#include "Trees/BinaryTree.h"

int main(){
    TreeNode* node = new TreeNode(4);
    cout<< node->getVal()<< endl;

    vector<int> test = {1,2,3};

    BinaryTree b_tree(test);
}