#include <bits/stdc++.h>
using namespace std;

int maiusculo(char caractere){
    if((caractere >= 'A') && (caractere <= 'Z')){
        return 1;
    } else {
        return 0;
    }
}

string xoring(string r, string s){
    string resultado;
    for(int i = 0; i < r.size(); i++){
        if(maiusculo(r[i]) && maiusculo(s[i])){
            resultado.push_back(r[i]);
        } else if(maiusculo(r[i]) > maiusculo(s[i])){
            resultado.push_back(s[i]);
        } else if(maiusculo(r[i]) < maiusculo(s[i])) {
            resultado.push_back(r[i]);
        } else {
            resultado.push_back(r[i] - 32);
        }
    }
    return resultado;
}


int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string r;
        string s;

        cin >> r >> s;

        cout << xoring(r,s) << endl;
    }

    return 0;
}