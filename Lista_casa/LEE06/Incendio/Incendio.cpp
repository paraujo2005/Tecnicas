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
    int N, M;
    cin >> N >> M;

    vector<vector<int>> matriz(N + 1);

    int A, B;
    while(M--){
        cin >> A >> B;
        matriz[A].push_back(B);
        matriz[B].push_back(A);
    }

    int C, E, F, cam_extintor, cam_incendio;
    cin >> C >> E >> F;

    const int oo = 0x3f3f3f3f;
    vector<int>dist_extintor(N + 1, oo);
    vector<int>dist_incendio(N + 1, oo);

    bfs_dists(C, dist_extintor, matriz, oo);
    cam_extintor = dist_extintor[E];

    bfs_dists(E, dist_incendio, matriz, oo);
    cam_incendio = dist_incendio[F];

    cout << cam_extintor + cam_incendio;

    return 0;
}