#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    int A;
    map<string, int> lista;

    cin >> S >> A;
    while(S != "fim"){
        if(lista.count(S)){
            cout << lista.find(S)->first << " eh reincidente com " << lista.find(S)->second << " crime(s)" << endl;
            lista.find(S)->second++;
        } else {
            lista.insert(make_pair(S, 1));
            cout << S << " eh reu primario" << endl;
        }

        cin >> S >> A;
    }

    return 0;
}