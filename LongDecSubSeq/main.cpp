#include <iostream>
#include <vector>

using namespace std;

int lds(int arr[], int n){
    int l[n];
    int i, j, max = 0;

    for(i = 0; i < n; i++){
        l[i] = 1;
    }

    for(i = 1; i < n; i++){
        for(j = 0; j < i; j++){
            if(arr[i] < arr[j] && l[i] < l[j]){
                l[i] = l[j] + 1;
            }
        }
    }

    for(i = 0; i < n; i++){
        if(max < l[i]){
            max = l[i];
        }
    }

    return max;
}

int main(){

    int arr[] = {1,5,4,7,9,6,3,8,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<< lds(arr,n) << endl;

}