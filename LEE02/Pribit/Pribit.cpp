#include <bits/stdc++.h>
using namespace std;

int primo(long long int num){
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(){
    int n;
    long long int v;

    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> v;
        long long int v_bits = __builtin_popcountll(v);
        
        cout << v;
        if(primo(v_bits)){
            cout << " eh um pribit" << endl;
        } else {
            cout << " nao eh um pribit" << endl;
        }
    }


    return 0;
}