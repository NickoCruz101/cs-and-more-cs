#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int solve(vector< vector<int> >& dp, int i,int j, vector<int>& A, vector<int>& B);
void populate(vector<int>& seq, int length);
int getMin(int x, int y, int z);


int main(){
//Get input
    int n1,n2;
    int rows,cols;

    cin >> n1; // size of Sequence A
    cin >> n2; // size of Sequence B



    vector<int> A;
    vector<int> B;

    populate(A,n1);
    populate(B,n2);



    rows = n2 + 1;
    cols = n1 + 1;
    vector< vector<int> > dp(rows + 1, vector<int>(cols + 1, 0));


    for(int j = 1; j <= cols; j++){
        dp[0][j] = dp[0][j-1] + A[j];
    }

    for(int i = 1; i <= rows; i++){
        dp[i][0] = dp[i-1][0] + B[i];
    }

    int cost = solve(dp,n2,n1,A,B);

    cout<< cost << endl;

    return 0;

}

int getMin(int x, int y, int z){
    int m = min(x,y);
    int n = min(y,z);

    if(m - n <= 0){
        return(m);
    }
    return(n);
};

void populate(vector<int>& seq, int length){
    seq.push_back(0);
    int a;
    for(int i = 1; i <= length; i++){
        cin >> a;
        seq.push_back(a);
    }
};

int solve(vector< vector<int> >& dp, int i,int j, vector<int>& A, vector<int>& B){
    if(dp[i][j] != 0){
        return dp[i][j];
    }
    bool notZero = (i != 0 && j != 0);

    if(A[j] == B[i] && notZero){
        return dp[i][j] = solve(dp,i-1,j-1,A,B);
    }

    if(i == 0 && j == 0){
        return dp[i][j];
    }

    if(i == 0 && j != 0){
        return dp[0][j];
    }

    if(j == 0 && i != 0){
        return dp[i][0];
    }

    if(i >= 1 || j >= 1){
        int a = solve(dp,i-1,j,A,B) + B[i];
        int b = solve(dp,i-1,j-1,A,B) + abs(A[j] - B[i]);
        int c = solve(dp,i,j-1,A,B) + A[j];

        return dp[i][j] = getMin(a,b,c);

    }
    return dp[B.size()][A.size()];
};


