#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    set<char> palavra;

    cin >> S;

    for(auto c : S){
        palavra.insert(c);
    }

    for(auto i = palavra.begin(); i != palavra.end(); i++){
        cout << *i;
    }

    return 0;
}