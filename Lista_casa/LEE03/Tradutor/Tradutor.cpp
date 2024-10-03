#include <bits/stdc++.h>
using namespace std;

bool valido(string s){
    stack<char> pilha;

    for(char c:s){
        if(c == '(' || c == '[' || c == '{'){
            pilha.push(c);
        } else if (c == ')' || c == ']' || c == '}'){
            if(pilha.empty()) return false;

            if((c == ')' && (pilha.top() != '(')) || 
               (c == ']' && (pilha.top() != '[')) || 
               (c == '}' && (pilha.top() != '{'))) return false;

            pilha.pop();
        }
    }
    
    return pilha.empty();
}

int main(){
    string s;
    cin >> s;

    if(valido(s)){
        cout << "OK" << endl;
    } else {
        cout << "SyntaxError" << endl;
    }

    return 0;
}