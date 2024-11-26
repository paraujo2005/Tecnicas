#include <bits/stdc++.h>
using namespace std;

int main(){
    int V;
    cin >> V;

    vector<vector<int>> matriz (V + 1, vector<int>(V + 1, 0));

    int E, A;
    for(int i = 1; i <= V; i++){
        cin >> E;
        while(E--){
            cin >> A;
            matriz[i][A] = 1;
        }
    }

    for (int i = 1; i <= V; i++) {
        for (int j = 1; j <= V; j++) {
            cout << matriz[i][j];
            if (j < V) cout << " ";
        }
        cout << endl;
    }

    return 0;
}