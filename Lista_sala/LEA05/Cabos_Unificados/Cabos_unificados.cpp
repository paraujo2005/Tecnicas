#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, C, soma = 0, novo;
    multiset<int> cabos;

    cin >> N;
    while(N--){
        cin >> C;
        cabos.insert(C);
    }

    while(cabos.size() > 1){
        auto primeiro = cabos.begin();
        auto segundo = ++cabos.begin();
        soma += *segundo;
        novo = *primeiro + *segundo;

        cabos.erase(primeiro);
        cabos.erase(segundo);
        cabos.insert(novo);
    }

    cout << soma;

    return 0;
}