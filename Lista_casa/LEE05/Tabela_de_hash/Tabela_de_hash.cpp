#include <bits/stdc++.h>
using namespace std;

int main(){
    int M, C, V, posicao;

    cin >> M >> C;

    vector<queue<int>> hash(M);

    while(C--){
        cin >> V;
        posicao = V % M;
        hash[posicao].push(V);
    }

    for(int i = 0; i < M; i++){
        cout << i << " -> ";

        while(!hash[i].empty()){
            cout << hash[i].front() << " -> ";
            hash[i].pop();
        }

        cout << "\\" << endl;
    }

    return 0; 
}