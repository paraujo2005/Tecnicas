#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    string s;
    int contador = 0;
    int pareador = 0;
 
    cin >> N;
 
    for(int i = 0; i < N; i++){
        cin >> s;
 
        for(char c : s){
            if(c == '<'){
                pareador ++;
            }
            if(c == '>') {
                if(pareador > 0){
                    pareador --;
                    contador ++;
                }
            }
        }
 
        cout << contador << endl;
 
        pareador = 0;
        contador = 0;
    }
 
    return 0;
}