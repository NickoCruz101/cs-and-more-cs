#include <iostream>

int main(){
    const int x = 5;
    std::cout<< x << std::endl;

    int a{2};
    char c{'c'};

    const int* i = &a; // const pointer, pointing to memory location of a

    const char* j = &c;

    std::cout<< "a: "<< *i << ", c: "<< *j << std::endl;

    a = 5; // i remains pointed to the same memory location of a, but the value of
    c = 'e';

    std::cout<< "a: "<< *i << ", c: "<< *j << std::endl;

}