#include <iostream>
#include <vector>

using namespace std;

struct customObj{
    string o_str;
    customObj(string s){
        this->o_str = s;
    }

    bool operator<(const customObj &o) const{
        return this->o_str < o.o_str;
    }
};

int main(){

}