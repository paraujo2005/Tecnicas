#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int C, Q, A, B, P;
    vector<pair<int, int>> parafusos;
 
    cin >> C >> Q;
 
    for (int i = 0; i < C; i++) {
        cin >> A >> B;
        parafusos.push_back({A, B}); 
    }
 
    for (int i = 0; i < Q; i++) {
        cin >> P;
        int contador = 0;
 
        for (const auto& parafuso : parafusos) {
            if (P >= parafuso.first && P <= parafuso.second) {
                contador++;
            }
        }
 
        if (contador > 0) {
            cout << "Contem " << contador << " parafuso(s) do tipo " << P << endl;
        } else {
            cout << "Nao contem parafusos do tipo " << P << endl;
        }
    }
 
    return 0;
}