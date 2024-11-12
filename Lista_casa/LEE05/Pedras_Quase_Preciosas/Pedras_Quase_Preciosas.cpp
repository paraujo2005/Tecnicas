#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, total = 0;
    string C, P;
    unordered_set<char> negociaveis;
    unordered_multiset<char> pedras;

    cin >> T;
    while(T--){
        cin >> C >> P;

        for(auto pedra : C){
            negociaveis.insert(pedra);
        }

        for(auto pedra : P){
            pedras.insert(pedra);
        }

        for(auto pedra : negociaveis){
            total += pedras.count(pedra);
        }

        cout << "Contem " << total << " pedras negociaveis" << endl;

        total = 0;
        negociaveis.clear();
        pedras.clear();
    }

    return 0;
}