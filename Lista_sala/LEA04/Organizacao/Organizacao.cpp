#include<bits/stdc++.h>
using namespace std;

int main(){
    int P, S;
    string chave, valor;
    map<string, vector<string>> pessoas;
    vector<string> valores;
    bool encontrado = false;

    cin >> P >> S;

    while(P--){
        cin >> chave;
        for(int i = 0; i < 3; i++){
            cin >> valor;
            valores.push_back(valor);
        }
        pessoas[chave] = (valores);
        valores.clear();
    }

    while(S--){
        cin >> chave >> valor;

        if (pessoas.find(chave) != pessoas.end()){
            for (auto& i : pessoas[chave]) {
                if (i == valor) encontrado = true;
            }

            if(encontrado){
                cout << chave << " conseguiu ganhar " << valor << "!" << endl;
            } else {
                cout << chave << " infelizmente ganhou " << valor << "..." << endl;
            }
        } else {
            cout << chave << " queria ganhar qualquer coisa e ganhou " << valor << "!" << endl;
        }

        encontrado = false;
    }
    

    return 0;
}