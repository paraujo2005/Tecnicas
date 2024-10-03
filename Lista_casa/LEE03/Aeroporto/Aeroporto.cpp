#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<string> n;
    queue<string> s;
    queue<string> l;
    queue<string> o;
    char cardeal;

    while(true){
        string entrada = "";
        cin >> entrada;

        if(entrada == "0") break;
        if((entrada == "N") || (entrada == "S") || (entrada == "L") || (entrada == "O")){
            cardeal = entrada[0];
            continue;
        }

        if(cardeal == 'N') n.push(entrada);
        if(cardeal == 'S') s.push(entrada);
        if(cardeal == 'L') l.push(entrada);
        if(cardeal == 'O') o.push(entrada);
    }

    queue<string> ordem;
    while(true){
        if(!n.empty()){
            ordem.push(n.front());
            n.pop();
        }

        if(!s.empty()){
            ordem.push(s.front());
            s.pop();
        }

        if(!l.empty()){
            ordem.push(l.front());
            l.pop();
        }

        if(!o.empty()){
            ordem.push(o.front());
            o.pop();
        }

        if(n.empty() && s.empty() && l.empty() && o.empty()) break;
    }

    cout << ordem.front();
    ordem.pop();
    while(!ordem.empty()){
        cout << " " << ordem.front();
        ordem.pop();
    }

    cout << endl;

    return 0;
}