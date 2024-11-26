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
    
    vector<vector<int>> matriz (N + 1);

    int U, V;
    while(M--){
        cin >> U >> V;
        matriz[U].push_back(V);
        matriz[V].push_back(U);
    }

    vector<bool> visitado(N + 1, false);
    int grupos = 0;

    for(int i = 1; i <= N; i++){
        if(!visitado[i]){
            grupos++;
            dfs(i, visitado, matriz);
        }
    }

    cout << grupos << " gangue(s) no clube da briga";

    return 0;
}