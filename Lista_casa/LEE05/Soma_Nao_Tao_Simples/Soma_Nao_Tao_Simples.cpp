#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < N - 2; ++i) {
        int esq = i + 1, dir = N - 1;

        while (esq < dir) {
            int soma = A[i] + A[esq] + A[dir];

            if (soma == K) {
                cout << A[i] << " " << A[esq] << " " << A[dir] << endl;
                return 0;
            } else if (soma < K) {
                ++esq;
            } else {
                --dir;
            }
        }
    }

    cout << "Nao existe" << endl;
    return 0;
}
