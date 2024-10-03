#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    deque<int> pilha;
    deque<int> descarte;
 
    for (int i = N; i >= 1; i--) {
        pilha.push_back(i);
    }
 
    while (pilha.size() > 1) {
        descarte.push_back(pilha.front());
        pilha.pop_front();
        pilha.push_back(pilha.front());
        pilha.pop_front();
    }
 
    int ultima_carta = pilha.front();
 
    cout << "Descarte:" << " ";
    if(!descarte.empty()){
        cout << descarte[0];
        for (int i = 1; i < descarte.size(); i++) {
            cout << ", " << descarte[i];
        }
    }
    cout << endl;
 
    cout << "Ultima carta: " << ultima_carta << endl;
 
    return 0;
}