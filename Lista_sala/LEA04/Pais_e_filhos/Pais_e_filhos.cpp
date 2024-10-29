#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, C, Digito, V;
    vector<int> arvore;

    cin >> N;
    cin >> C;

    if(N == 1){
        cout << "NULL" << endl;
        return 0;
    }

    arvore.push_back(-1);

    while(N--){
        cin >> Digito;
        arvore.push_back(Digito);
    }

    while(C--){
        cin >> V;

        if(V == 1){
            cout << "RAIZ - ";
        } else if(V%2 == 0){
            cout << arvore[V/2] << " - ";
        } else {
            cout << arvore[(V - 1)/2] << " - ";
        }

        if(arvore[V * 2] == -1){
            cout << "NULL" << " ";
        } else {
            cout << arvore[V * 2] << " ";
        }

        if(arvore[(V * 2) + 1] == -1){
            cout << "NULL" << endl;
        } else {
            cout << arvore[(V * 2) + 1] << endl;
        }
    }

    return 0;
}


