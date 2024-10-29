#include<bits/stdc++.h>
using namespace std;

int main(){
    int P, R, lugar, aux;
    set<int> clientes;

    cin >> P >> R;

    while(P--){
        cin >> lugar;
        clientes.insert(lugar);

        if(clientes.size() <= R){
            cout << *clientes.rbegin() << endl;
        } else {
            aux = R - 1;
            auto it = clientes.begin();
            while(aux--){
                it++;
            }

            cout << *it << endl;
        }
    }

    return 0;
}