#include <bits/stdc++.h>
using namespace std;

const int oo = 0x3f3f3f3f;

void bfs_dists(int U, vector<int>& dist, const vector<vector<int>>& matriz){
    queue<int> fila;
    fila.push(U);
    dist[U] = 0;
    while(!fila.empty()){
        U = fila.front();
        fila.pop();
        for(auto M: matriz[U]){
            if(dist[M] == oo){
                fila.push(M);
                dist[M] = dist[U] + 1;
            }
        }
    }
}

int main(){
    int N, M;
    cin >> N >> M;

    vector<vector<int>> matriz (N + 1);

    int A, B;
    while(M--){
        cin >> A >> B;
        matriz[A].push_back(B);
        matriz[B].push_back(A);
    }

    vector<int>dis_ben (N + 1, oo);
    vector<int>dis_animal (N + 1, oo);

    int Ben, Animal, Saida;
    cin >> Ben >> Animal >> Saida;
    bfs_dists(Ben, dis_ben, matriz);
    bfs_dists(Animal, dis_animal, matriz);

    if(dis_animal[Saida] > dis_ben[Saida]){
        cout << "FUGA";
    } else {
        cout << "EMBATE";
    }

    return 0;
}