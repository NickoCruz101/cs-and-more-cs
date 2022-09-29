#ifndef __CTREE_H__
#define __CTREE_H__
#include <iostream>
#include <vector>
#include <string>

using std::pair; using std::cout;
using std::endl; using std::make_pair;
using std::vector;

// struct position{
//     pair<int,int> pos;
//     int x;
//     int y;
//     position(int x, int y){
//         pos = make_pair(x,y);
//     }

//     position(): x(0), y(0){};

//     pair<int,int> getPos(){
//         return this->pos;
//     }
// };

struct Node{
    vector<Node*> branches;
    int x,y;
    Node(int x, int y);
};
class ChessTree{
    private:

    protected:

    public:
        // The root will be the starting position of the chess piece.
        // 
        Node* root;
        ChessTree(Node* r):root(r){};
        
};



#endif