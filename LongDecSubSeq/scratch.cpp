#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 3;
    vector<int> nums;
    int i = 1;
    int x;
    while(i <= 3){
        cin >> x;
        nums.push_back(x);
        i = i + 1;
    }

    for(int i = 0; i < nums.size(); i++){
        cout<< nums[i] << " ";
    }


}