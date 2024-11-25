#include <bits/stdc++.h>
using namespace std;

void bfs_dists(int U, vector<int>& dist, const vector<vector<int>>& matriz, const int oo){
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
    int M, N;
    cin >> M >> N;

    vector<vector<int>> matriz(M + 1);

    int A, B;
    while(N--){
        cin >> A >> B;
        matriz[A].push_back(B);
        matriz[B].push_back(A);
    }

    const int oo = 0x3f3f3f3f;
    vector<int>dist(M + 1, oo);
    bfs_dists(1, dist, matriz, oo);

    if(dist[M] == oo){
        cout << "-1";
    } else {
        cout << dist[M];
    }

    return 0;
}