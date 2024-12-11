#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    string W;
    while(N--){
        cin >> W;
        set<char> verificador;
        for(auto c : W){
            verificador.insert(c);
        }

        if(W.size() == verificador.size()){
            cout << "STRONGRAMA" << endl;
        } else {
            cout << "WEAKORD" << endl;
        }
    }

    return 0;
}