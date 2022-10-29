#include <iostream>
#include <vector>

using namespace std;

vector<int> vec(10,0); //Global vector used for dynamic fibonacci

int r_fib(int n); // recurrsive fibonnaci func
int d_fib1(int n);// Uses the global vec
int d_fib2(int n, vector<int>& ); // Pass vec by reference, 

int arr[10] = {};
int d_fibA(int n); // using array

int main(){

    int f = r_fib(10); // => 55

    cout << f << endl;


    int df1 = d_fib1(10);

    cout <<"df1: "<< vec[10] << endl;

    int df2 = d_fib2(10,vec);
    cout<< "df2: "<< df2 << endl;

    vector<int> loc_vec (10,-1);
    int df3 = d_fib2(10,loc_vec);

    cout<< "df3: "<< df3 << endl;

    int dfA = d_fibA(10);
    cout<< "dfA: "<< dfA << endl;





}

int r_fib(int n){
    if(n <= 1){
        return n;
    }

    return r_fib(n-1) + r_fib(n-2);
}

int d_fib1(int n){
    if(vec[n] != 0){
        return vec[n];
    }

    if(n <= 1){
        return vec[n] = n;
    }else{

        return vec[n] = d_fib1(n-1) + d_fib1(n-2);
    }

}

int d_fib2(int n,vector<int>& Lvec){
    if(Lvec[n] != -1){
        return Lvec[n];
    }

    if(n <= 1){
        return Lvec[n] = n;
    }

    return Lvec[n] = d_fib2(n-1, Lvec) + d_fib2(n-2, Lvec);

}


int d_fibA(int n){
    if(arr[n] != 0){
        return arr[n];
    }

    if(n <= 1){
        return arr[n] = n;
    }

    return arr[n] = d_fibA(n-1) + d_fibA(n-2);


}
