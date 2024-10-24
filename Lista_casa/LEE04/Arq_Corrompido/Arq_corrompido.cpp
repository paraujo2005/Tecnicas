#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap<int, string> linhas;
    int T, L, matricula, instancias = 0, erros = 0;
    string disciplina;

    cin >> T;
    while(T--){
        cin >> L;
        while(L--){
            cin >> matricula >> disciplina;            
            linhas.insert({matricula, disciplina});
            
            if(linhas.count(matricula) != 0){
                auto range = linhas.equal_range(matricula);
                for(auto it = range.first; it != range.second; it++){
                    if(it->second == disciplina) instancias++;
                }

                if(instancias > 1) erros++;
                instancias = 0;
            }
        }

        if(erros != 0){
            cout << "Corrompido com " << erros << " erro(s)" << endl;
        } else {
            cout << "Arquivo OK" << endl;
        }

        erros = 0;
        linhas.clear();
    }

    return 0;
}