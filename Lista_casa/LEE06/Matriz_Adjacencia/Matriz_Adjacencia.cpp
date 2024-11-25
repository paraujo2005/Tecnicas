#include <bits/stdc++.h>
using namespace std;

int main(){
    int V, C;
    cin >> V >> C;

    vector<vector<int>> matriz(V, vector<int>(V, 0));

    int A, B;
    while(C--){
        cin >> A >> B;
        matriz[--A][--B] = 1;
        matriz[B][A] = 1;
    }

    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            cout << matriz[i][j];
            if (j < V - 1) cout << " ";
        }
    cout << endl;
    }

    return 0;
}