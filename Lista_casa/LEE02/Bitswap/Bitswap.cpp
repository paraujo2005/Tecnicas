#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int n;
    int t, p, q;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> p >> q;
        int p_bit, q_bit;
        p_bit = (n >> p) & 1;
        q_bit = (n >> q) & 1;

        if(p_bit == q_bit){
            cout << n << endl;
        } else {
            unsigned long long int mascara = (1ULL << p) | (1ULL << q);
            unsigned long long int resultado = n ^ mascara;
            cout << resultado << endl;
        }
    }

    return 0;
}