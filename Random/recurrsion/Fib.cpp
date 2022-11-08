#include <iostream>

using namespace std;

int fib(int );

int main(){
    int x = fib(5);

    cout<< x << endl;
}

int fib(int n){
    if(n <= 1){
        return n;
    }

    return fib(n-1) + fib(n-2);
}