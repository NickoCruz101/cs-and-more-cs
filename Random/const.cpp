#include <iostream>

int main(){
    const int x = 5;
    std::cout<< x << std::endl;

    int a{2};
    char c{'c'};

    const int* i = &a; // pointing to (a) in memory
    // (i) cannot alter the value at that memory address. 
    // *i = 7;  will result in compile time error

    std::cout<< "a: "<< *i << " changed to ";
    a = 5; // to alter the value that i is pointing to we must directly access the variable and assign it a new variable.
    std::cout<< "a: "<< *i << std::endl;

    int w = 34;

    int* const p = &w; //int* const, pointer can change value at the memory location, but cannot change the memory location.

}