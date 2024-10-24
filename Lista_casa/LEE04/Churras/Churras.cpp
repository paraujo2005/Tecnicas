#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> ingredientes;
    int A, P;
    string S;

    cin >> A;
    while(A--){
        cin >> P;
        while(P--){
            cin >> S;
            if(ingredientes.count(S)){
                cout << S << " ja tem" << endl;
            } else {
                ingredientes.insert(S);
                cout << "adicionando " << S << endl;
            }
        }

    }

    cout << "Itens do churrasco:" << endl;
    for(auto it = ingredientes.begin(); it != ingredientes.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}