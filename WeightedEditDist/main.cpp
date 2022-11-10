#include <iostream>
#include <vector>
#include <string>

using namespace std;


int solve(vector< vector<int> >& dp, int i,int j, vector<int>& A, vector<int>& B);
void populate(vector<int>& seq, int length);
void printArr(vector<int>& v, string lbl);
//void populateMatrix(int arr[][]);

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

    printArr(A,"A: ");
    printArr(B,"B: ");

    rows = n2 + 1;
    cols = n1 + 1;

    // initializing array
    vector< vector<int> > dp(rows + 1, vector<int>(cols + 1, 0));
    //int dp[rows][cols]; 
    //dp[0][0] = 0;


    for(int j = 1; j <= cols; j++){
        dp[0][j] = dp[0][j-1] + A[j];
    }

    for(int i = 1; i <= rows; i++){
        dp[i][0] = dp[i-1][0] + B[i];
    }


    for(int i = 0; i <= n2; i++){
        for(int j = 0; j <= n1; j++){
            cout << dp[i][j] <<" ";
        }
        cout<< endl;
    }

    int cost = solve(dp,n2,n1,A,B);

    cout<< cost << endl;

    for(int i = 0; i <= n2; i++){
        for(int j = 0; j <= n1; j++){
            cout << dp[i][j] <<" ";
        }
        cout<< endl;
    }

}

void populate(vector<int>& seq, int length){
    seq.push_back(0);
    int a;
    for(int i = 1; i <= length; i++){
        cin >> a;
        seq.push_back(a);
    }
}
void printArr(vector<int>& v, string lbl){
    cout<< lbl;
    for(int i = 0; i < v.size(); i++){
        cout<< v[i] << " ";
    }
    cout<<"\n"<<endl;


    
}

// dp 0th row and 0th column has already been populated.
// Pass i = 1 and j = 1
int solve(vector< vector<int> >& dp, int i,int j, vector<int>& A, vector<int>& B){

    //cout<< "i: "<< i<< " j: "<< j << " ";
    if(dp[i][j] != 0){
        return dp[i][j];
    }
    bool notZero = (i != 0 and j != 0);

    if(A[j] == B[i] and notZero){
        return dp[i][j] = solve(dp,i,j-1,A,B);
    }

    if(i == 0 and j == 0){
        //cout<< "return: "<< dp[i][j] << " ";
        return dp[i][j];
    }

    if(i == 0 and j != 0){
        //cout<< "i = 0, j != 0: return: "<< dp[i][j] << " ";
        return dp[0][0] = 0;
    }

    if(j == 0 and i != 0){
        //cout<< "i != 0, j == 0: return: "<< dp[i][j] << " ";
        return dp[i][0];
    }

    if(i >= 1 or j >= 1){

        int a = solve(dp,i-1,j,A,B) + B[i];
        //cout<< " a: "<< a<< " ";
        int b = solve(dp,i-1,j-1,A,B) + abs(A[j] - B[i]);
        //cout<< " b: " << b << " ";
        int c = solve(dp,i-1,j,A,B) + A[j];
        //cout<<" c: "<< c << " ";
        cout<< "d[" << i << "][" << j << "] = "<< min({a,b,c}) << " "<< endl;
        return dp[i][j] = min({a,b,c});

    }

    else{
        return dp[A.size() + 1][B.size() + 1];
    }

}


