#include <iostream>
#include <vector>

using namespace std;


int dynamic_fib(int n);
int glob_arr[10] = {0};

int main(){
    int n;
    cin >> n;



}

int dynamic_fib(int n){
    if(glob_arr[n] != 0){
        return glob_arr[n];
    }

    if(n <= 1){
        return glob_arr[n] = n;
    }

    return glob_arr[n] = dynamic_fib(n-1) + dynamic_fib(n-2);
}