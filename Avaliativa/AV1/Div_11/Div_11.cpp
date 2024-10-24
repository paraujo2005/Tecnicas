#include<bits/stdc++.h>
using namespace std;

int main(){
    int D;
    string N;
    queue<int> fila1;
    queue<int> fila2;

    while(cin >> D && D != -1){
        cin >> N;

        string digito;
        for(int i = 0; i < D; i++){
            digito = N[i];
            if((i%2) != 0){
                fila2.push(stoi(digito));
            } else {
                fila1.push(stoi(digito));
            }
        }

        int soma1 = 0;
        int soma2 = 0;

        while(!fila1.empty()){
            soma1 += fila1.front();
            fila1.pop();
        }

        while(!fila2.empty()){
            soma2 += fila2.front();
            fila2.pop();
        }

        cout << N << ": " << soma1 << " - " << soma2 << " = " << soma1 - soma2 << " - ";

        if(((soma1 - soma2) % 11) != 0){
            cout << "nao" << endl;
        } else {
            cout << "sim" << endl;
        }

        N = "";
    }

    return 0;
}