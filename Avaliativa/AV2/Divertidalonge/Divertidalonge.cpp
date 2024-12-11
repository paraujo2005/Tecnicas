#include <bits/stdc++.h>
using namespace std;

const int oo = 0x3f3f3f3f;

void dijkstra(int origem, vector<int>& dist, vector<vector<pair<int, int>>>& G) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, origem});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;

        for (auto [v, w] : G[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<pair<int,int>>> G(N + 1);

    int U, V, W;
    while(M--){
        cin >> U >> V >> W;
        G[U].push_back({V, W});
        G[V].push_back({U, W});
    }

    vector<int>distancia (N + 1, oo);
    distancia[1] = 0;

    dijkstra(1, distancia, G);

    int result = 0;
    for(int i = 1; i < N + 1; i++){
        if(result < distancia[i]){
            result = distancia[i];
        }
    }

    if(result == oo){
        cout << "Impossivel chegar";
    } else {
        cout << "Casa mais distante a " << result << " metros";
    }

    return 0;
}