#include<bits/stdc++.h>
using namespace std;

int main(){
    string baralho1, baralho2;
    set<char> verificador, duplicatas;
    int T, carta;

    cin >> T;
    while(T--){
        cin >> baralho1 >> baralho2;
        
        for(auto c:baralho1){
            verificador.insert(c);
        }

        for(auto c:baralho2){
            if(verificador.count(c)){
                duplicatas.insert(c);
            }
        }

        if(duplicatas.empty()){
            cout << "Baralhos prontos para o duelo";
        } else {
            for(auto it = duplicatas.begin(); it != duplicatas.end(); it++){
                cout << *it;
            }
        }

        cout << endl;
        verificador.clear();
        duplicatas.clear();
    }

    return 0;
}