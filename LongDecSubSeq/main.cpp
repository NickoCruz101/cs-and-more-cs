#include <iostream>
#include <vector>

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
    int n1 = 9;
    vector<int> seq1 = {1,5,4,7,9,6,3,8,2};

    int n2 = 5;
    vector<int> seq2 = {22160, 297625, 230329, 191306, 867900};

    int n3 = 8;
    vector<int> seq3 = {878361,973449,649581,186790,904723,54458,959645,322343};

    cout<<lds(seq1,n1)<<endl;
    cout<<lds(seq2,n2)<< endl;
    cout<<lds(seq3,n3)<< endl;

}