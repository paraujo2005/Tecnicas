#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, M, Q;
    scanf("%d %d %d", &N, &M, &Q);
 
    vector<int> elementos(N * M);
    for (int i = 0; i < N * M; i++) {
        scanf("%d", &elementos[i]);
    }
 
    while (Q--) {
        int V;
        scanf("%d", &V);
 
        auto it = lower_bound(elementos.begin(), elementos.end(), V);
 
        if (it != elementos.end() && *it == V) {
            int index = distance(elementos.begin(), it);
            int row = index / M;
            int col = index % M; 
            printf("%d %d\n", row, col);
        } else {
            printf("-1 -1\n");
        }
    }
 
    return 0;
}