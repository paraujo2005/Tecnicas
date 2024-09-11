#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;

    cin >> n;

    for(long long int i = 0; i < n; i++){
        long long int num1;
        long long int num2;
        long long int numfinal;

        cin >> num1;
        cin >> num2;

        numfinal = num1 ^ num2;

        int resultado = __builtin_popcountll(numfinal);

        cout << resultado << endl;
    }

    return 0;
}