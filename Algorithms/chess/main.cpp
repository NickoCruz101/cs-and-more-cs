#include<iostream>
#include<vector>

using namespace std;

struct Square{
    bool occupied = false;
    bool start_square = false;
    bool end_square = false;

    pair<int,int> coordinates;

    Square(int x, int y){
        this->coordinates = make_pair(x,y);
        this->occupied = false;
        this->start_square = false;
        this->end_square = false;
    }


    bool isOccupied(){
        return this->occupied;
    }

    bool isEndSquare(){
        return this->end_square;
    }

    bool isStartSquare(){
        return this->start_square;
    }



};
struct Node{

    Square* sq_ptr;
    vector<Node*> potMoves;
    Node(Square* sq){
        this->sq_ptr = sq;
        this->potMoves = {};
    }

    void add_to_potMoves(Node* n){
        this->potMoves.push_back(n);
    }
}

int main(){
    //read in input
    // set 
}