#include <iostream>
#include <algorithm>

using namespace std;

int sum(int ); // returns the sum of n + (n-1) + ... + (0)
int main(){
    int expected = 15;
    int x = sum(5);
    cout << "\n\t sum(n) = (n) + (n-1) + ... + 1 + 0 \n" << endl;
    cout<< "sum(5) => ";
    cout<< "Expected: " << 15 << ", Actual: " << x << "\n" << endl;

    if(x == 15){
        cout << "\t Test Passed \n" << endl;
    }


}

int sum(int n){
    // Base case
    if(n == 0){
        return(0);
    }
    return n + sum(n-1);
}