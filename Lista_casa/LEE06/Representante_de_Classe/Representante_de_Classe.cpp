#include <bits/stdc++.h>
using namespace std;

void dfs(int U, vector<bool>& visitado, const vector<vector<int>>& matriz){
    visitado[U] = true;
    for (int vizinho: matriz[U]) {
        if(!visitado[vizinho]){
            dfs(vizinho, visitado, matriz);
        }
    }
}

int main(){
    int N, M;
    cin >> N >> M;

    vector<vector<int>> matriz(N + 1);

    int A, B;
    while(M--){
        cin >> A >> B;
        matriz[A].push_back(B);
        matriz[B].push_back(A);
    }

    int maior_num = 0;
    for(int i = 1; i <= N; i++){
        vector<bool> visitado(N + 1);
        dfs(i, visitado, matriz);

        int contador = 0;
        for(auto j : visitado){
            if(j) contador++;
        }

        if(contador > maior_num) maior_num = contador;
    }

    cout << "O grupo mais numeroso tem " << maior_num <<" aluno(s)";

    return 0;
}