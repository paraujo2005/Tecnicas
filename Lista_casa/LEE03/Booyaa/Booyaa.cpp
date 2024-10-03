#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> fila;
    unsigned long long int F;
    unsigned long long int D;
    int s;

    cin >> F >> D;

    // Adicionar na fila os 30 primeiros dias
    for (int i = 0; i < 30; i++) {
        cin >> s;
        fila.push_back(s);
    }

    // Calcular Inscritos
    long double total;
    long long int inscr_hj;
    for (int i = 0; i < D; i++) {
        total = 0;

        // Calcular soma dos últimos 30 dias
        for (int j = 0; j < 30; j++) {
            total += fila[j];
        }

        // Calcular média e arredondar para cima
        inscr_hj = ceil(total / 30.0);

        // Atualizar a fila
        fila.pop_front();
        fila.push_back(inscr_hj);

        F += inscr_hj;
    }

    cout << F << endl;

    return 0;
}