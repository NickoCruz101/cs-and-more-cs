#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution{

public:
    vector<int> A;
    int a_len;
    vector<int> B;
    int b_len;
    vector< vector<int> > D;
    Solution(vector<int> A, vector<int> B, int al, int bl, vector< vector<int> > dp){
        this->A = A;
        this->B = B;
        this->a_len = al;
        this->b_len = bl;
        this->D = dp; 
    }

    // int solve(int lenA, int lenB){
    //     int a = 0;
    //     int b = 0;

    //     for(int i = 0; i < lenA; i++){
    //         for(int j = 0; j<lenB; j++){
    //             if(j == 0 or i == 0){
    //                 D[i][i] = min(i,j);
    //             }

    //             if(A[i] == B[j]){

    //             }
    //         }
    //     }

 
    // }

    int solve(int i , int j){
        
        if(D[i][j] != -1){
            return D[i][j];
        }

        if(i == 0 and j == 0){
            return D[i][j] = 0;
        }

        if(i == 0 || j == 0){
            return D[i][j] = max(i,j);
        }

        bool notZero = (i > 0 && j > 0);

        if(A[i] == B[j] && notZero){
            return D[i][j] = solve(i-1,j-1);
        }
        else{
            int a = solve(i,j-1) + B[j];
            int b = solve(i-1,j) + abs(A[i] - B[j]);
            int c = solve(i-1,j-1) + A[i];

        //return D[i][j] = min({insertion,replacement,removal});
            return D[i][j] = min( {a,b,c} );
            //cout<< "D[" << i << " ]"<< "[ "<< j << "]" << D[i][j] << endl;

            //return D[i][j];
        }

    }

    int get_min(int x, int y, int z){
        int minA = min(x,y);
        int minB = min(y,z);

        if(minA == minB){
            return minA;
        }

        return min(minA,minB);

    }

    // int solve(){
    //     for(int i = 0; i < this->a_len; i++){
    //         for(int j = 0; j < this-> )
            
    //     }
    // }



};

int main(){
    //Get input
    int lenA,lenB;

    cin >> lenA >> lenB;

    vector<int> A;
    A.push_back(-1);
    vector<int> B;
    B.push_back(-1);
    int x;
    for(unsigned int i = 0; i < lenA; i++){
        cin >> x;
        A.push_back(x);
    }
    for(unsigned int j = 0; j < lenB; j++){
        cin >> x;
        B.push_back(x);
    }

    vector< vector<int> > dp(lenB + 1, vector<int>(lenA+1,-1) );

    Solution s(A,B,lenA,lenB,dp);

    int cost = 0;

    s.solve(lenA,lenB);
    //cout<< cost<< endl;
    //cout<< s.D[lenA-1][lenB] << endl;
    for(int i = 0; i < s.D.size(); i++){
        cout<< "Row: "<< i << "| ";
        for(int j = 0; j < s.D[i].size();j++){
            if(cost < s.D[i][j]){
                cost = s.D[i][j];
            }
            cout<< s.D[i][j] << " ";
        }
        cout<< endl;
    }

    cout<< cost << endl;
    return 0;

};


