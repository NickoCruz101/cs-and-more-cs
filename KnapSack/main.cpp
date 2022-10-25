#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Knapsack{


public:
    int solveKnapsack(const vector<int> &values, const vector<int> &weights, int capacity){
        vector<vector<int>> S(values.size(), vector<int>(capacity + 1, -1));
        // Recursive statement begins with given capacity and index = 0:
        return this->knapRec(S, values, weights, capacity, 0);
    }

private:
    int knapRec(vector<vector<int>> &S, const vector<int> &values, const vector<int> &weights, int capacity, int currentIndex){
    // Base Case 1: If we are out of room OR the currentIndex is outOfRange
        if (capacity <= 0 || values.size() <= currentIndex){
            return 0;
        }
    // Base Case 2: If we have recorded the best solution for our bag with this much room left:
        if (S[currentIndex][capacity] != -1){
            return S[currentIndex][capacity];
        }

        int bestA = 0;
    // if the items weight is less than or equal to capacity
        if (weights[currentIndex] <= capacity){
            //assign bestA with the currentValue + recurrsive statement( updated capacity, index ++ )
            bestA = values[currentIndex] + knapRec(S, values, weights,capacity - weights[currentIndex], currentIndex + 1);
        }
    // 
        int bestB = knapRec(S, values, weights, capacity, currentIndex + 1);

        S[currentIndex][capacity] = max(bestA, bestB);

        return S[currentIndex][capacity];
    
    }
};



int best;
int main(){
    int capacity,n; //capacity of bag and (n) lines to read in
    cin >>capacity >> n;
    vector<int> values;
    vector<int> weights;

    int currLine = 1; // line counter
    // Reads in each line assigning them to an item object and pushing them back into the items vector
    int w,v;
    while(currLine <= n){
        cin>>w>>v;
        values.push_back(v);
        weights.push_back(w);
        currLine = currLine + 1;
    }

    Knapsack knapSack;

    best = knapSack.solveKnapsack(values,weights,capacity);
    cout<< best <<endl;

}

