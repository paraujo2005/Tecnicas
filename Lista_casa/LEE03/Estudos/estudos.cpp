#include <bits/stdc++.h>
using namespace std;
 
bool podeResolver(int maxExerciciosPorSessao, const vector<int>& exercicios, int horas) {
    int totalHorasNecessarias = 0;
    for (int ex : exercicios) {
        totalHorasNecessarias += (ex + maxExerciciosPorSessao - 1) / maxExerciciosPorSessao;
        if (totalHorasNecessarias > horas) {
            return false;
        }
    }
    return totalHorasNecessarias <= horas;
}
 
int main() {
    int N, H;
    cin >> N >> H;
 
    vector<int> exercicios(N);
    for (int i = 0; i < N; i++) {
        cin >> exercicios[i];
    }
 
    int esquerda = 1, direita = 1e9;
    int resposta = 0;
 
    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        if (podeResolver(meio, exercicios, H)) {
            resposta = meio;
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }
 
    cout << resposta << endl;
 
    return 0;
}