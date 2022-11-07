#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lds(vector<int> &seq, int n)
{
    vector<int> L;
    for (int p = 0; p < n; p++)
    {
        L.push_back(0);
    }

    
    int best = 0;
    for (int i = 0; i < n; i++)
    {
        best = L[i];
        for (int j = 0; j < i; j++)
        {
            if (seq[i] < seq[j] && best < L[j])
            {
                best = L[j];
            }
        }
        L[i] = best + 1;
    }

    int max = 0;
    for(int i = 0; i < L.size(); i++){
        if(max < L[i]){
            max = L[i];
        }
    }

    // for(auto i: L){
    //     cout << i << " ";
    // }

    return max;


}

int main(){
    
    int n;
    vector<int> seq;

    cin >> n;

    int i = 1;
    int x = 0;
    while(i <= n){
        cin >> x;
        seq.push_back(x);
        i = i + 1;
    }

    cout<< lds(seq,n);





    // string s;
    // int lineCount = 1;
    // while(lineCount < 3){
    //     getline(cin,s);
    //     if(lineCount == 1){
    //         n = int(s[0]) - 48;
    //         //cout << "n: "<< n << endl;
    //     }
    //     lineCount = lineCount + 1;
    // };

    // //cout<<"s: "<< s << endl;

    // for(int i = 0; i < s.length(); i++){
    //     int x = int(s[i]);
    //     if(x != 32){
    //         x = x - 48;
    //         seq.push_back(x);
    //     }
    // }

    //cout<< lds(seq,n)<< endl;

    // for(int i = 0; i < seq.size(); i++){
    //     cout << seq[i] <<" "<< endl;
    // }



//     int n1 = 9;
//     vector<int> seq1 = {1,5,4,7,9,6,3,8,2};

//     int n2 = 5;
//     vector<int> seq2 = {22160, 297625, 230329, 191306, 867900};

//     int n3 = 8;
//     vector<int> seq3 = {289, 943948, 654318, 680546, 696035, 710570, 503887, 430867};

//     int n4 = 8;
//     vector<int> seq4 = {878361,973449,649581,186790,904723,54458,959645,322343};
    
//     int n5 = 8;
//     vector<int> seq5 = {756432, 2950, 681842, 618353, 112726, 360664, 453085, 213819};
    
//     int n6 = 10;
//     vector<int> seq6 = {684819, 461753, 14555 ,10687, 439796, 279026, 9629, 331527, 987012, 31686};

//     cout<<lds(seq1,n1)<< endl;
//     cout<<lds(seq2,n2)<< endl;
//     cout<<lds(seq3,n3)<< endl;
//     cout<<lds(seq4,n4)<< endl;
//     cout<<lds(seq5,n5)<< endl;
//     cout<<lds(seq6,n6)<<endl;

}