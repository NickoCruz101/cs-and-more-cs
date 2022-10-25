#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct item{
    int price,val;
    item(int p, int v):price(p),val(v) {};
};


vector<item> items; // Global items vector



int main(){
    int capacity,n; //capacity of bag and (n) lines to read in
    cin >>capacity >> n;

    vector<int> S(capacity,0);

    for(auto i: S){
        cout << i << endl;
    }

    int currLine = 1; // line counter
    // Reads in each line assigning them to an item object and pushing them back into
    // the items vector

    // int w,v;
    // while(currLine <= n){
    //     cin>>w>>v;
    //     item i(w,v);
    //     items.push_back(i);
    //     currLine = currLine + 1;
    // }

}