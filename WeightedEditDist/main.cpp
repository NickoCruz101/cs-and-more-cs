#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Seq{

public:
    int seq_size;
    vector<int> seq;
    Seq(){
        this->seq_size = 0;
        this->seq = {};
    }
    Seq(int length){
        this->seq_size = length;
        this->seq = seq;
        int x;
        for(int i = 0; i < this->seq_size;i++){
            cin >> x;
            this->seq.push_back(x);
        }
    }
};

class A: public Seq{
    A(int l): Seq(l) {};
};

class B: public Seq{
    B():Seq(0) {};
    B(int l): Seq(l){};
};

int main(){
    //Get input
    int lenA,lenB;

    cin >> lenA, lenB;
    
    A(lenA);
    B(lenB);

}


