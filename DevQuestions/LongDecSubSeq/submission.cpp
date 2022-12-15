#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lds(vector<int> &seq)
{
    vector<int> L;
    int n = seq.size();
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
    return max;


}

int main(){
    
    int n;
    vector<int> seq;

    cin >> n;

    int i = 0;
    int x = 0;
    while(i < n){
        cin >> x;
        seq.push_back(x);
        i = i + 1;
    }

    cout<< lds(seq)<<endl;
}