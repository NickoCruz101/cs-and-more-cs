#include <iostream>
#include <vector>


struct foo
{
    int a;
    double b;
    std::string c;

    foo(int a, double b, std::string const & c) : a(a), b(b), c(c){}
};



int arr[] = {1,2,3,4,5}; // Static Array
int* darr = new int[5]; // Dynamic Array

// types of initialization for vectors
std::vector<int> vec{1,2,3,4,5}; // initialization list

std::vector<int> vecA{arr, arr+5}; //   vecA = {1,2,3,4,5} , Init from an array
std::vector<int> vecB{arr,arr+4}; //    vecB = {1,2,3,4} 

void printVec(std::vector<int>& );




int main(){
    int a[] = {1,2,3,4,5};
    std::vector<int> vecD{a,a+5};

    printVec(vecD); // vecD = {1,2,3,4,5};

    vecD.pop_back(); // removes the last element in the vector

    printVec(vecD); // vecD = {1,2,3,4};

    
}
void printVec(std::vector<int>& v){
    std::vector<int>::iterator it;

    for(it = v.begin(); it < v.end(); it++){
        std::cout << *it << " ";
    }

    std::cout<< std::endl;
}
