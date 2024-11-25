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
    int V, C;
    cin >> V >> C;

    vector<vector<int>> matriz(V + 1);

    int A, B;
    while(C--){
        cin >> A >> B;
        matriz[A].push_back(B);
        matriz[B].push_back(A);
    }

    vector<bool> visitado(V + 1, false);

    dfs(1, visitado, matriz);

    for(int i = 1; i <= V; i++){
        if(!visitado[i]){
            cout << "Varios grupos de amigos";
            return 0;
        }
    }

    cout << "Todo mundo eh amigo de todo mundo";
    return 0;
}