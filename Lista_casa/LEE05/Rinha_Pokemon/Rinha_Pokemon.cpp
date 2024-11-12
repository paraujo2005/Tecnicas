#include <bits/stdc++.h>
using namespace std;

struct Pokemon {
    string nome;
    int forca;
    int indice;
    
    Pokemon(string n, int f, int i) : nome(n), forca(f), indice(i) {}
    
    bool operator<(const Pokemon& outro) const {
        if (forca == outro.forca) {
            if (nome == outro.nome) {
                return indice > outro.indice;
            }
            return nome < outro.nome;
        }
        return forca < outro.forca;
    }
};

int main() {
    int P, F, I = 0;
    string S;
    priority_queue<Pokemon> pq;

    cin >> P;
    while (P--) {
        cin >> S >> F;
        pq.push(Pokemon(S, F, I++));
    }

    while (pq.size() > 1) {
        Pokemon primeiro = pq.top();
        pq.pop();
        Pokemon segundo = pq.top();
        pq.pop();
        
        cout << primeiro.nome << " (" << primeiro.forca << ") x (" << segundo.forca << ") " << segundo.nome << " : ";
        
        if (primeiro.forca == segundo.forca) {
            cout << "empate" << endl;
        } else if (primeiro.forca > segundo.forca) {
            cout << primeiro.nome << " venceu" << endl;
            primeiro.forca -= segundo.forca;
            pq.push(primeiro);
        } else {
            cout << segundo.nome << " venceu" << endl;
            segundo.forca -= primeiro.forca;
            pq.push(segundo);
        }
    }
    
    if (pq.empty()) {
        cout << "nenhum vencedor" << endl;
    } else {
        Pokemon vencedor = pq.top();
        cout << vencedor.nome + " venceu com " + to_string(vencedor.forca) << endl;
    }
    
    return 0;
}